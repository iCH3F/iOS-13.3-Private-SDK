//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OITSUProgress.h>

@class OITSUBasicProgressStorage;

__attribute__((visibility("hidden")))
@interface OITSUBasicProgress : OITSUProgress
{
    OITSUBasicProgressStorage *mStorage;
}

@property(getter=isIndeterminate) BOOL indeterminate;
- (double)maxValue;
@property double value;
- (void)dealloc;
- (id)init;
- (id)initWithMaxValue:(double)arg1;

@end
