//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <VideosUI/IKAppDocumentDelegate-Protocol.h>

@class IKAppDocument, NSDictionary, VideosExtrasActivityIndicator;
@protocol VideosExtrasLoadingViewDelegate;

__attribute__((visibility("hidden")))
@interface VideosExtrasLoadingView : UIView <IKAppDocumentDelegate>
{
    IKAppDocument *_document;
    NSDictionary *_options;
    VideosExtrasActivityIndicator *_activityIndicator;
    id <VideosExtrasLoadingViewDelegate> _delegate;
}

// - (void).cxx_destruct;
- (void)documentDidUpdate:(id)arg1;
- (void)documentNeedsUpdate:(id)arg1;
- (void)_show;
- (void)cancelCountdownToVisibility;
- (void)startCountdownToVisibilityWithInterval:(double)arg1;
- (id)initWithDocument:(id)arg1 options:(id)arg2 delegate:(id)arg3;

@end

