//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIFont, UIFontDescriptor;

@interface PLCommentsFontCache : NSObject
{
    UIFontDescriptor *__shortCaptionFontDescriptor;
    UIFontDescriptor *__emphasizedShortCaptionFontDescriptor;
    UIFontDescriptor *__shortSubheadlineFontDescriptor;
    UIFontDescriptor *__bodyFontDescriptor;
    UIFontDescriptor *__emphasizedBodyFontDescriptor;
    UIFontDescriptor *__shortBodyFontDescriptor;
}

+ (id)sharedCache;
@property(readonly, nonatomic) UIFont *commentSendButtonFont;
@property(readonly, nonatomic) UIFont *commentEntryFont;
@property(readonly, nonatomic) UIFont *commentAttributionNameFont;
@property(readonly, nonatomic) UIFont *commentAttributionDateFont;
@property(readonly, nonatomic) UIFont *commentTextFont;
@property(readonly, nonatomic) UIFont *likeFont;
@property(readonly, nonatomic) UIFont *youLikeFont;
- (id)_shortBodyFontDescriptor;
- (id)_emphasizedBodyFontDescriptor;
- (id)_bodyFontDescriptor;
- (id)_shortSubheadlineFontDescriptor;
- (id)_emphasizedShortCaptionFontDescriptor;
- (id)_shortCaptionFontDescriptor;
- (void)_invalidateCache;
- (void)_contentSizesDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

@end

