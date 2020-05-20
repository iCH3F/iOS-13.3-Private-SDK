//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKGraphSeriesDataSource.h>

@class HKGraphSeriesDataBlock;

__attribute__((visibility("hidden")))
@interface HKScalarDataSource : HKGraphSeriesDataSource
{
    HKGraphSeriesDataBlock *_dataBlock;
}

@property(readonly, nonatomic) HKGraphSeriesDataBlock *dataBlock; // @synthesize dataBlock=_dataBlock;
// - (void).cxx_destruct;
- (id)cachedBlockForPath:(CDStruct_912cb5d2)arg1 context:(id)arg2;
- (void)blocksRequestedFromPath:(CDStruct_912cb5d2)arg1 toPath:(CDStruct_912cb5d2)arg2;
- (CDStruct_912cb5d2)blockPathForX:(id)arg1 zoom:(long long)arg2;
- (id)initWithCGPoints:(CGPoint )arg1 count:(long long)arg2 unitForY:(id)arg3;
- (id)initWithValuePoints:(id)arg1 unitForY:(id)arg2;

@end

