//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, TFAppLockup;

__attribute__((visibility("hidden")))
@interface TFLaunchScreen : NSObject
{
    TFAppLockup *_lockup;
    NSString *_testerNotes;
    NSURL *_howToScreenshotSupportUrl;
}

@property(readonly, nonatomic) NSURL *howToScreenshotSupportUrl; // @synthesize howToScreenshotSupportUrl=_howToScreenshotSupportUrl;
@property(readonly, copy, nonatomic) NSString *testerNotes; // @synthesize testerNotes=_testerNotes;
@property(readonly, nonatomic) TFAppLockup *lockup; // @synthesize lockup=_lockup;
// - (void).cxx_destruct;
- (id)initWithLockup:(id)arg1 testerNotes:(id)arg2 howToScreenshotSupportUrl:(id)arg3;

@end

