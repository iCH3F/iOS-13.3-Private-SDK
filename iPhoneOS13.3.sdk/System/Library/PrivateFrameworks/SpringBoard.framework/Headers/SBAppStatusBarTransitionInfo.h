//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIStatusBarStyleRequest;

@interface SBAppStatusBarTransitionInfo : NSObject
{
    UIStatusBarStyleRequest *_startStyleRequest;
    long long _startOrientation;
    UIStatusBarStyleRequest *_endStyleRequest;
    long long _endOrientation;
    int _transition;
    BOOL _zoomOther;
}

@property(nonatomic) BOOL zoomOther; // @synthesize zoomOther=_zoomOther;
@property(nonatomic) int transition; // @synthesize transition=_transition;
@property(nonatomic) long long endOrientation; // @synthesize endOrientation=_endOrientation;
@property(copy, nonatomic) UIStatusBarStyleRequest *endStyleRequest; // @synthesize endStyleRequest=_endStyleRequest;
@property(nonatomic) long long startOrientation; // @synthesize startOrientation=_startOrientation;
@property(copy, nonatomic) UIStatusBarStyleRequest *startStyleRequest; // @synthesize startStyleRequest=_startStyleRequest;
// - (void).cxx_destruct;
- (id)description;

@end

