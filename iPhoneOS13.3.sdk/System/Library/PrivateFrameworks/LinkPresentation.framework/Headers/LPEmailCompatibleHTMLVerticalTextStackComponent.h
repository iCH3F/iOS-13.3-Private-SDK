//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPHTMLComponent.h>

@class LPCaptionBarPresentationProperties, LPVerticalTextStackViewStyle;

__attribute__((visibility("hidden")))
@interface LPEmailCompatibleHTMLVerticalTextStackComponent : LPHTMLComponent
{
    LPVerticalTextStackViewStyle *_style;
    LPCaptionBarPresentationProperties *_presentationProperties;
}

+ (id)styleSet;
+ (id)ruleDictionaryForStyle:(id)arg1;
+ (id)baseRules;
// - (void).cxx_destruct;
- (void)buildComponents;
- (id)componentForRow:(id)arg1 style:(id)arg2 name:(id)arg3;
- (id)initWithStyle:(id)arg1 presentationProperties:(id)arg2 themePath:(id)arg3 generator:(id)arg4;

@end

