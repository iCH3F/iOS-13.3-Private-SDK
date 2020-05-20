//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUIScoreboardLayout, VUITextBadgeLayout;

__attribute__((visibility("hidden")))
@interface VUISportsOverlayLayout : TVViewLayout
{
    VUIScoreboardLayout *_scoreboardLayout;
    VUITextBadgeLayout *_textBadgeLayout;
    TVImageLayout *_appImageLayout;
    TVImageLayout *_logoImageLayout;
}

+ (id)_sportsOverlayCLayoutWithElement:(id)arg1;
+ (id)_sportsOverlayBLayoutWithElement:(id)arg1;
+ (id)_sportsOverlayALayoutWithElement:(id)arg1;
+ (long long)_scoreboardTypeForElement:(id)arg1;
+ (id)overlayLayoutForElement:(id)arg1 cardLayoutType:(long long)arg2;
@property(retain, nonatomic) TVImageLayout *logoImageLayout; // @synthesize logoImageLayout=_logoImageLayout;
@property(retain, nonatomic) TVImageLayout *appImageLayout; // @synthesize appImageLayout=_appImageLayout;
@property(retain, nonatomic) VUITextBadgeLayout *textBadgeLayout; // @synthesize textBadgeLayout=_textBadgeLayout;
@property(retain, nonatomic) VUIScoreboardLayout *scoreboardLayout; // @synthesize scoreboardLayout=_scoreboardLayout;
// - (void).cxx_destruct;

@end

