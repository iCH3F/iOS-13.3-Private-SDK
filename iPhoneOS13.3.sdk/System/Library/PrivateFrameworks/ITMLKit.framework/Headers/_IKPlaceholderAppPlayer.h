//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKAppPlayer-Protocol.h>

@class IKAppDocument, IKAppPlayerBridge, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSNumber;
@protocol IKAppMediaItem, IKAppPlaylist;

@interface _IKPlaceholderAppPlayer : NSObject <IKAppPlayer>
{
    NSMutableDictionary *_eventExtraInfoByEvent;
    BOOL muted;
    BOOL showsResumeMenu;
    BOOL interactiveOverlayDismissable;
    IKAppPlayerBridge *bridge;
    long long state;
    id <IKAppPlaylist> playlist;
    NSNumber *currentMediaItemDuration;
    NSDate *currentMediaItemDate;
    id <IKAppMediaItem> currentMediaItem;
    double scanRate;
    id <IKAppMediaItem> nextMediaItem;
    id <IKAppMediaItem> previousMediaItem;
    IKAppDocument *overlayDocument;
    IKAppDocument *interactiveOverlayDocument;
    NSArray *currentMediaItemAccessLogs;
    NSArray *currentMediaItemErrorLogs;
    NSDictionary *contextMenuData;
    NSDictionary *userInfo;
}

@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo;
@property(copy, nonatomic) NSDictionary *contextMenuData; // @synthesize contextMenuData;
@property(readonly, nonatomic) NSArray *currentMediaItemErrorLogs; // @synthesize currentMediaItemErrorLogs;
@property(readonly, nonatomic) NSArray *currentMediaItemAccessLogs; // @synthesize currentMediaItemAccessLogs;
@property(nonatomic) BOOL interactiveOverlayDismissable; // @synthesize interactiveOverlayDismissable;
@property(retain, nonatomic) IKAppDocument *interactiveOverlayDocument; // @synthesize interactiveOverlayDocument;
@property(retain, nonatomic) IKAppDocument *overlayDocument; // @synthesize overlayDocument;
@property(readonly, nonatomic) id <IKAppMediaItem> previousMediaItem; // @synthesize previousMediaItem;
@property(readonly, nonatomic) id <IKAppMediaItem> nextMediaItem; // @synthesize nextMediaItem;
@property(nonatomic) BOOL showsResumeMenu; // @synthesize showsResumeMenu;
@property(nonatomic) BOOL muted; // @synthesize muted;
@property(readonly, nonatomic) double scanRate; // @synthesize scanRate;
@property(readonly, nonatomic) id <IKAppMediaItem> currentMediaItem; // @synthesize currentMediaItem;
@property(readonly, nonatomic) NSDate *currentMediaItemDate; // @synthesize currentMediaItemDate;
@property(readonly, nonatomic) NSNumber *currentMediaItemDuration; // @synthesize currentMediaItemDuration;
@property(retain, nonatomic) id <IKAppPlaylist> playlist; // @synthesize playlist;
@property(readonly, nonatomic) long long state; // @synthesize state;
@property(readonly, nonatomic) IKAppPlayerBridge *bridge; // @synthesize bridge;
// - (void).cxx_destruct;
- (void)cleanup;
- (void)stopObservingEvent:(id)arg1;
- (void)startObservingEvent:(id)arg1 extraInfo:(id)arg2;
- (void)setElapsedTime:(double)arg1;
- (void)scan:(double)arg1;
- (void)changeToMediaAtIndex:(long long)arg1;
- (void)previous;
- (void)next;
- (void)stop;
- (void)pause;
- (void)play;
- (void)present;
- (void)transferValuesToAppPlayer:(id)arg1;

@end

