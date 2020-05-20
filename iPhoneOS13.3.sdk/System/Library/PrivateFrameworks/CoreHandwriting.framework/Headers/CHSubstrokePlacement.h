//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CHSubstroke;

@interface CHSubstrokePlacement : NSObject <NSCopying>
{
    CHSubstroke *_substroke;
    long long _originalWritingDirectionIndex;
    CGVector _writingOrientation;
    CGVector _strokeDeviation;
    CGPoint _coalescedCenter;
}

@property(nonatomic) CGPoint coalescedCenter; // @synthesize coalescedCenter=_coalescedCenter;
@property(nonatomic) long long originalWritingDirectionIndex; // @synthesize originalWritingDirectionIndex=_originalWritingDirectionIndex;
@property(nonatomic) CGVector strokeDeviation; // @synthesize strokeDeviation=_strokeDeviation;
@property(nonatomic) CGVector writingOrientation; // @synthesize writingOrientation=_writingOrientation;
@property(readonly, retain, nonatomic) CHSubstroke *substroke; // @synthesize substroke=_substroke;
@property(readonly, nonatomic) CGRect rotatedBounds;
- (void)dealloc;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithSubstroke:(id)arg1;

@end
