//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXScrollPositionManager-Protocol.h>

@protocol SXScrollPositionRestoring;

@interface SXScrollPositionManager : NSObject <SXScrollPositionManager>
{
    id <SXScrollPositionRestoring> _scrollPositionRestoring;
}

@property(nonatomic) __weak id <SXScrollPositionRestoring> scrollPositionRestoring; // @synthesize scrollPositionRestoring=_scrollPositionRestoring;
// - (void).cxx_destruct;
- (void)updateScrollPosition:(id)arg1 animated:(BOOL)arg2;

@end

