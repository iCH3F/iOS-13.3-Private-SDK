//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSMutableURLRequest, NSString, NSURL, NSURLRequest;

@protocol SL_OOPAuthFlowDelegate
- (void)webViewDidFinishLoadWithPageTitleSupplier:(void (^)(void (^)(NSString *)))arg1;
- (BOOL)shouldHideWebViewForLoadWithRequest:(NSURLRequest *)arg1;
- (NSMutableURLRequest *)requestForAuthURL:(NSURL *)arg1;
- (NSURL *)authURLForUsername:(NSString *)arg1;
- (void)setAuthFlowCompletion:(void (^)(BOOL, NSDictionary *, NSError *))arg1;
- (NSString *)initialRedirectURL;
@end

