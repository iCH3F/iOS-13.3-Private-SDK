//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface _UIViewFittingSizeTargetInfo : NSObject <NSCopying>
{
    BOOL _dummy;
    float _horizontalPriority;
    float _verticalPriority;
    CGSize _targetSize;
}

@property(nonatomic, getter=isDummy) BOOL dummy; // @synthesize dummy=_dummy;
@property(readonly, nonatomic) float verticalPriority; // @synthesize verticalPriority=_verticalPriority;
@property(readonly, nonatomic) float horizontalPriority; // @synthesize horizontalPriority=_horizontalPriority;
@property(readonly, nonatomic) CGSize targetSize; // @synthesize targetSize=_targetSize;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTargetInfo:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithTargetSize:(CGSize)arg1 horizontalPriority:(float)arg2 verticalPriority:(float)arg3;

@end

