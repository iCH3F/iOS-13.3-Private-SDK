//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSMutableArray, _DKEventQuery;

@interface _DKAggregateEventQueryResult : NSObject
{
    _DKEventQuery *_query;
    NSMutableArray *_mutableEvents;
    NSMutableArray *_mutableErrors;
    NSUInteger _numberOfContributions;
}

@property(nonatomic) NSUInteger numberOfContributions; // @synthesize numberOfContributions=_numberOfContributions;
@property(retain, nonatomic) NSMutableArray *mutableErrors; // @synthesize mutableErrors=_mutableErrors;
@property(retain, nonatomic) NSMutableArray *mutableEvents; // @synthesize mutableEvents=_mutableEvents;
@property(retain, nonatomic) _DKEventQuery *query; // @synthesize query=_query;
// - (void).cxx_destruct;
- (void)addError:(id)arg1;
- (void)addEvents:(id)arg1;
@property(readonly, copy, nonatomic) NSError *aggregateError;
@property(readonly, copy, nonatomic) NSArray *aggregateEvents;
- (id)initWithEventQuery:(id)arg1;

@end

