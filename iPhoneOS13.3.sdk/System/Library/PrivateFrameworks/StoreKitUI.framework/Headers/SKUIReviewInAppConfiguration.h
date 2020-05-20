//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SKUIClientContext, UIImage, UIViewController;

@interface SKUIReviewInAppConfiguration : NSObject
{
    BOOL _sandboxed;
    NSString *_itemID;
    NSString *_title;
    UIViewController *_viewController;
    SKUIClientContext *_clientContext;
    NSString *_customDescription;
    UIImage *_icon;
}

@property(nonatomic, getter=isSandboxed) BOOL sandboxed; // @synthesize sandboxed=_sandboxed;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *customDescription; // @synthesize customDescription=_customDescription;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
// - (void).cxx_destruct;

@end

