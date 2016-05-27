//
//  MasterViewController.h
//  GymNew
//
//  Created by Admin on 09.05.16.
//  Copyright © 2016 SSAU. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@class MidViewController;

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) MidViewController *midViewController;
@property (strong, nonatomic) NSManagedObject *selectedGym;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

