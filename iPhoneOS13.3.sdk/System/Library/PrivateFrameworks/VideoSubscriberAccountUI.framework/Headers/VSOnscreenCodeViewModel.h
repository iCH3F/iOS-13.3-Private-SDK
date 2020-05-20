//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccountUI/VSViewModel.h>

#import <VideoSubscriberAccountUI/VSLogoImageViewModel-Protocol.h>

@class NSItemProvider, NSString, NSURL, UIImage, VSMessageQueue;

__attribute__((visibility("hidden")))
@interface VSOnscreenCodeViewModel : VSViewModel <VSLogoImageViewModel>
{
    BOOL _shouldShowRegenerateCodeButton;
    NSItemProvider *_logoProvider;
    UIImage *_logo;
    NSString *_logoAccessibilityLabel;
    NSString *_webPagePreamble;
    NSURL *_webPageURL;
    NSString *_webPagePostamble;
    NSString *_onscreenCode;
    NSString *_regenerateCodeButtonTitle;
    VSMessageQueue *_regenerateCodeEventQueue;
    NSString *_footerText;
}

@property(copy, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(retain, nonatomic) VSMessageQueue *regenerateCodeEventQueue; // @synthesize regenerateCodeEventQueue=_regenerateCodeEventQueue;
@property(copy, nonatomic) NSString *regenerateCodeButtonTitle; // @synthesize regenerateCodeButtonTitle=_regenerateCodeButtonTitle;
@property(nonatomic) BOOL shouldShowRegenerateCodeButton; // @synthesize shouldShowRegenerateCodeButton=_shouldShowRegenerateCodeButton;
@property(copy, nonatomic) NSString *onscreenCode; // @synthesize onscreenCode=_onscreenCode;
@property(copy, nonatomic) NSString *webPagePostamble; // @synthesize webPagePostamble=_webPagePostamble;
@property(copy, nonatomic) NSURL *webPageURL; // @synthesize webPageURL=_webPageURL;
@property(copy, nonatomic) NSString *webPagePreamble; // @synthesize webPagePreamble=_webPagePreamble;
@property(copy, nonatomic) NSString *logoAccessibilityLabel; // @synthesize logoAccessibilityLabel=_logoAccessibilityLabel;
@property(retain, nonatomic) UIImage *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) NSItemProvider *logoProvider; // @synthesize logoProvider=_logoProvider;
// - (void).cxx_destruct;
- (void)configureWithRequest:(id)arg1;
- (id)init;

@end

