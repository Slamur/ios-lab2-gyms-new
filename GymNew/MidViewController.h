//
//  MidViewController.h
//  GymNew
//
//  Created by Admin on 09.05.16.
//  Copyright © 2016 SSAU. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "CoreDataClasses.h"

@class DetailViewController;

@interface MidViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (weak, nonatomic) IBOutlet UIDatePicker *datePicker;

@property (strong, nonatomic) NSManagedObject *gym;
@property (strong, nonatomic) NSManagedObject *selectedExercise;

@property (strong, nonatomic) DetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end


