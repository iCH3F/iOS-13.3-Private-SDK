//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DFrustumRect : NSObject
{
    float _left;
    float _right;
    float _bottom;
    float _top;
}

+ (id)rectWithLeft:(float)arg1 right:(float)arg2 bottom:(float)arg3 top:(float)arg4;
@property(readonly, nonatomic) float top; // @synthesize top=_top;
@property(readonly, nonatomic) float bottom; // @synthesize bottom=_bottom;
@property(readonly, nonatomic) float right; // @synthesize right=_right;
@property(readonly, nonatomic) float left; // @synthesize left=_left;
- (box_80622335)toBox;
- (id)initWithLeft:(float)arg1 right:(float)arg2 bottom:(float)arg3 top:(float)arg4;

@end

