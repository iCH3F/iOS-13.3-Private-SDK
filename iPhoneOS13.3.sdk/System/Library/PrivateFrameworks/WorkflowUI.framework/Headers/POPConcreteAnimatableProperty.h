//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/POPAnimatableProperty.h>

@class NSString;

@interface POPConcreteAnimatableProperty : POPAnimatableProperty
{
    NSString *name;
    id /* CDUnknownBlockType */ readBlock;
    id /* CDUnknownBlockType */ writeBlock;
    double threshold;
}

- (double)threshold;
- (id /* CDUnknownBlockType */)writeBlock;
- (id /* CDUnknownBlockType */)readBlock;
- (id)name;
// - (void).cxx_destruct;
- (id)initWithName:(id)arg1 readBlock:(id /* CDUnknownBlockType */)arg2 writeBlock:(id /* CDUnknownBlockType */)arg3 threshold:(double)arg4;

@end

