//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGCurationTrait.h>

@interface PGCurationPartOfDayTrait : PGCurationTrait
{
    NSUInteger _value;
}

@property(readonly, nonatomic) NSUInteger value; // @synthesize value=_value;
- (id)debugDescription;
- (id)niceDescription;
- (BOOL)isActive;
- (id)initWithPartOfDay:(NSUInteger)arg1;

@end

