//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate;

@interface PGDayInHistoryMemoryGenerator : PGMemoryGenerator
{
    NSDate *_localDate;
}

@property(retain, nonatomic) NSDate *localDate; // @synthesize localDate=_localDate;
// - (void).cxx_destruct;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (void)_enumeratePotentialMemoriesUsingBlock:(id /* CDUnknownBlockType */)arg1;

@end
