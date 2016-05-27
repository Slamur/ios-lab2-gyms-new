//
//  DetailViewController.m
//  GymNew
//
//  Created by Admin on 09.05.16.
//  Copyright © 2016 SSAU. All rights reserved.
//

#import "DetailViewController.h"
#import "AppDelegate.h"
#import "ExerciseTypes.h"

@interface DetailViewController ()
@property (weak, nonatomic) IBOutlet UISegmentedControl *exerciseType;
@property (weak, nonatomic) IBOutlet UITextField *exerciseSize;

@end

@implementation DetailViewController

#pragma mark - Managing the detail item

-(void)viewDidLoad {
    [super viewDidLoad];
    
    for (int i = 0; i < e_types.count; ++i) {
        [self.exerciseType setTitle:e_types[i] forSegmentAtIndex:i];
    }
    
    AppDelegate *app = (AppDelegate*)[[UIApplication sharedApplication] delegate];
    self.managedObjectContext = app.managedObjectContext;
}

- (void)configureView {
    // Update the user interface for the detail item.
    if (self.exercise) {
        NSInteger type = [[self.exercise valueForKey:@"e_type"] integerValue];
        [self.exerciseType setSelectedSegmentIndex:type];
        
        self.exerciseSize.text = [[self.exercise valueForKey:@"size"] description];
    }
}

-(void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    [self configureView];
}

-(void)viewWillDisappear:(BOOL)animated {
    [super viewWillDisappear:animated];
    
    NSInteger type = [self.exerciseType selectedSegmentIndex];
    [self.exercise setValue:[NSNumber numberWithInteger:type] forKey:@"e_type"];
    
    NSInteger size = [[self.exerciseSize text] integerValue];
    [self.exercise setValue:[NSNumber numberWithInteger:size] forKey:@"size"];
    
    [self saveContext];
}

-(void)saveContext {
    
    // Save the context.
    NSError *error = nil;
    if (![self.managedObjectContext save:&error]) {
        // Replace this implementation with code to handle the error appropriately.
        // abort() causes the application to generate a crash log and terminate. You should not use this function in a shipping application, although it may be useful during development.
        NSLog(@"Unresolved error %@, %@", error, [error userInfo]);
        abort();
    }
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
