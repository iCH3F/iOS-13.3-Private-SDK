//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BYChronicle : NSObject
{
    NSMutableDictionary *_featureEntries;
}

@property(retain, nonatomic) NSMutableDictionary *featureEntries; // @synthesize featureEntries=_featureEntries;
// - (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)entryForFeature:(NSUInteger)arg1;
- (void)addEntry:(id)arg1 forFeature:(NSUInteger)arg2;
- (void)recordFeatureShown:(NSUInteger)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

