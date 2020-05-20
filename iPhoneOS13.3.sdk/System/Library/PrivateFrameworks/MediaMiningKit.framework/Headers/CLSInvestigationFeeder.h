//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/CLSInvestigationInterviewDelegate-Protocol.h>

@class NSDate, NSMutableSet, NSSet;

@interface CLSInvestigationFeeder : NSObject <CLSInvestigationInterviewDelegate>
{
    NSUInteger _locationClusteringAlgorithm;
    BOOL _allowsInterview;
    NSMutableSet *_focusItems;
    NSSet *_focusPeopleUUIDs;
}

@property(retain, nonatomic) NSSet *focusPeopleUUIDs; // @synthesize focusPeopleUUIDs=_focusPeopleUUIDs;
@property(readonly, nonatomic) NSMutableSet *focusItems; // @synthesize focusItems=_focusItems;
@property(nonatomic) BOOL allowsInterview; // @synthesize allowsInterview=_allowsInterview;
@property(nonatomic) NSUInteger locationClusteringAlgorithm; // @synthesize locationClusteringAlgorithm=_locationClusteringAlgorithm;
// - (void).cxx_destruct;
- (CGImage )itemThumbnailInInvestigation:(id)arg1 atIndex:(NSUInteger)arg2 withResolution:(NSUInteger)arg3;
- (NSUInteger)numberOfItemsInInvestigation:(id)arg1;
- (id)prepareWithProgressBlock:(id /* CDUnknownBlockType */)arg1;
- (id)_prepareFeederWithProgressBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumeratePersonNames:(id)arg1 withGaussiansUsingBlock:(id /* CDUnknownBlockType */)arg2;
- (void)enumerateLocationClustersWithGaussians:(id)arg1 enumerationBlock:(id /* CDUnknownBlockType */)arg2;
- (double)behavioralScore;
- (NSUInteger)numberOfRegularGemItems;
- (NSUInteger)numberOfShinyGemItems;
- (CGImage )itemThumbnailAtIndex:(NSUInteger)arg1 withResolution:(NSUInteger)arg2;
- (void)enumerateItemsWithOptions:(NSUInteger)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (void)enumerateItemsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)itemAtIndex:(NSUInteger)arg1;
- (id)allItems;
- (id)approximateLocation;
- (id)localEndDateComponents;
- (id)localStartDateComponents;
@property(readonly, nonatomic) NSDate *localEndDate;
@property(readonly, nonatomic) NSDate *localStartDate;
@property(readonly, nonatomic) NSDate *universalEndDate;
@property(readonly, nonatomic) NSDate *universalStartDate;
- (NSUInteger)numberOfItems;
- (id)init;

@end

