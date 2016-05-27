//
//  CoreDataClasses.h
//  GymNew
//
//  Created by Admin on 26.05.16.
//  Copyright © 2016 SSAU. All rights reserved.
//

#ifndef CoreDataClasses_h
#define CoreDataClasses_h


#endif /* CoreDataClasses_h */

@class Exercise;

@interface Gym : NSManagedObject

@property (nonatomic, retain) NSNumber * aID;
@property (nonatomic, retain) NSDate * date;
@property (nonatomic, retain) NSSet *exercises;
@end

@interface Gym (CoreDataGeneratedAccessors)


- (void)addExercise:(Exercise *)value;
- (void)removeExercise:(Exercise *)value;
- (void)addExercises:(NSSet *)values;
- (void)removeExercises:(NSSet *)values;

@end

@interface Exercise : NSManagedObject

@property (nonatomic, retain) NSNumber * aID;
@property (nonatomic, retain) NSNumber * size;
@property (nonatomic, retain) NSNumber * e_type;
@property (nonatomic, retain) Gym *gym;

@end
