//
//  Decorator.h
//  R_DesignPatterns(GOF)
//
//  Created by RocKK on 12/6/13.
//  Copyright (c) 2013 RocKK.
//  All rights reserved.
//
//  Redistribution and use in source and binary forms are permitted
//  provided that the above copyright notice and this paragraph are
//  duplicated in all such forms and that any documentation,
//  advertising materials, and other materials related to such
//  distribution and use acknowledge that the software was developed
//  by the RocKK.  The name of the
//  RocKK may not be used to endorse or promote products derived
//  from this software without specific prior written permission.
//  THIS SOFTWARE IS PROVIDED ''AS IS'' AND WITHOUT ANY EXPRESS OR
//  IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
//  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.

#import <Foundation/Foundation.h>

#pragma mark ChristmasTree

//Component
@protocol ChristmasDecoration
- (NSString*) show;
@end

//Concrete Component
@interface ChristmasTree : NSObject <ChristmasDecoration>
@end

#pragma mark Christmas Tree Decorators

//Decorator
@interface PrettyDecorator : NSObject <ChristmasDecoration>
{
    NSObject<ChristmasDecoration>* component;
}
@property (nonatomic, retain) NSObject<ChristmasDecoration>* component;
- (id) initWithComponent:(NSObject<ChristmasDecoration>*)decoration;
@end

//Concrete Decorator
@interface ChristmasTreeDecorations : PrettyDecorator
@end

//Concrete Decorator
@interface ChristmasTreeLights : PrettyDecorator
@end

#pragma mark [Application Interface]

//Application Interface
@interface Decorator : NSObject
@end
