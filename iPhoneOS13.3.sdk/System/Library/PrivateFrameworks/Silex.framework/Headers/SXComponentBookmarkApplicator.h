//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXBookmarkApplicator-Protocol.h>

@protocol SXScrollPositionRestoring;

@interface SXComponentBookmarkApplicator : NSObject <SXBookmarkApplicator>
{
    id <SXScrollPositionRestoring> _scrollPositionRestoring;
}

@property(readonly, nonatomic) id <SXScrollPositionRestoring> scrollPositionRestoring; // @synthesize scrollPositionRestoring=_scrollPositionRestoring;
// - (void).cxx_destruct;
- (void)applyBookmark:(id)arg1;
- (id)initWithScrollPositionRestoring:(id)arg1;

@end

