//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, NSURL, UIViewController;

__attribute__((visibility("hidden")))
@interface MLULookupItemContent : NSObject
{
    BOOL _valid;
    UIViewController *_previewViewController;
    NSUInteger _commitType;
    UIViewController *_commitViewController;
    NSURL *_commitURL;
}

+ (id)contentWithText:(id)arg1 range:(_NSRange)arg2;
+ (id)contentWithAttachments:(id)arg1 currentAttachmentIndex:(NSUInteger)arg2;
+ (id)contentWithURL:(id)arg1 result:(struct __DDResult )arg2 documentProperties:(id)arg3;
@property BOOL valid; // @synthesize valid=_valid;
@property(retain, nonatomic) NSURL *commitURL; // @synthesize commitURL=_commitURL;
@property(retain, nonatomic) UIViewController *commitViewController; // @synthesize commitViewController=_commitViewController;
@property(nonatomic) NSUInteger commitType; // @synthesize commitType=_commitType;
@property(retain, nonatomic) UIViewController *previewViewController; // @synthesize previewViewController=_previewViewController;
// - (void).cxx_destruct;
@property(readonly, nonatomic) CNContact *contact;
- (void)dismissViewController;
- (BOOL)commitPreviewInController:(id)arg1;
- (void)setupViewControllerInCommitMode;
- (BOOL)wantsSeamlessCommit;
- (id)children;
- (id)requiredEntitlements;

@end

