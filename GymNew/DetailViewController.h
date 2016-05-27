//
//  DetailViewController.h
//  GymNew
//
//  Created by Admin on 09.05.16.
//  Copyright © 2016 SSAU. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id exercise;

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end

