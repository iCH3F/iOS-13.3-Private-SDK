//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UITextItemInteractionHandler-Protocol.h>

@class UIView;
@protocol _UITextContent;

__attribute__((visibility("hidden")))
@interface _UITextPlainLinkInteractionHandler : NSObject <_UITextItemInteractionHandler>
{
    _NSRange _range;
    UIView<_UITextContent> *_view;
}

// - (void).cxx_destruct;
- (id)_addLinkToReadingListAction:(id)arg1;
- (id)_openAppLinkInExternalApplicationAction:(id)arg1;
- (id)_openAppLinkInDefaultBrowserAction:(id)arg1;
- (id)_shareLinkAction:(id)arg1;
- (id)_copyLinkAction:(id)arg1;
- (id)_openURLAction:(id)arg1;
- (id)_titleForLink:(id)arg1;
- (id /* CDUnknownBlockType */)_handlerRequiringUnlockedDevice:(id /* CDUnknownBlockType */)arg1;
- (id)link;
- (id)contextMenuConfiguration;
- (id)defaultAction;
- (id)initWithRange:(_NSRange)arg1 rect:(CGRect)arg2 inTextContentView:(id)arg3;

@end

