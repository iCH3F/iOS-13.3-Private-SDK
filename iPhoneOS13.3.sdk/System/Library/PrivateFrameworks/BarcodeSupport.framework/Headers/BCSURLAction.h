//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BarcodeSupport/BCSAction.h>

@class LSApplicationProxy, NSArray, NSURL;

__attribute__((visibility("hidden")))
@interface BCSURLAction : BCSAction
{
    NSArray *_appLinks;
    LSApplicationProxy *_applicationProxy;
    BOOL _deviceDataIsUnavailable;
    NSURL *_appStoreSearchURLForUnsupportedScheme;
    BOOL _hasPreferredAppLink;
}

@property(readonly, nonatomic) BOOL hasPreferredAppLink; // @synthesize hasPreferredAppLink=_hasPreferredAppLink;
// - (void).cxx_destruct;
- (BOOL)_isCodeFromQRScanner;
- (BOOL)_shouldBlockHandlingURL:(id)arg1;
- (BOOL)_shouldOpenInAppForAppLink:(id)arg1;
- (id)_actionDescriptionWithoutTargetApplicationForURL:(id)arg1;
- (id)_actionDescriptionForURL:(id)arg1 application:(id)arg2 shouldShowHostNameForSafariURL:(BOOL)arg3;
@property(readonly, nonatomic) LSApplicationProxy *targetApplication;
- (void)_resolveTargetApplicationForURL:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
@property(readonly, nonatomic) NSUInteger appLinkCount;
- (id)appLinks;
@property(readonly, nonatomic) BOOL mustOpenAppLinkInApp;
- (void)determineActionabilityWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)performAction;
- (void)performDefaultAction;
- (void)performDefaultActionWithFBOptions:(id)arg1;
- (id)actionPickerItems;
- (id)debugDescriptionExtraInfoDictionary;
- (id)defaultActionTargetApplicationBundleIdentifier;
- (id)localizedDefaultActionDescription;
- (id)localizedDefaultActionTitle;
- (id)url;
- (id)urlThatCanBeOpened;
- (id)initWithData:(id)arg1 codePayload:(id)arg2;

@end

