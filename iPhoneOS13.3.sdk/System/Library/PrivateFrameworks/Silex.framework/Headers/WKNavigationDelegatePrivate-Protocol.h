//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/WKNavigationDelegate-Protocol.h>

@class NSArray, NSData, NSError, NSString, NSURL, WKBackForwardListItem, WKFrameInfo, WKNavigation, WKNavigationAction, WKWebView, WKWebpagePreferences, _WKContentRuleListAction;
@protocol NSSecureCoding;

@protocol WKNavigationDelegatePrivate <WKNavigationDelegate>

@optional
- (void)_webView:(WKWebView *)arg1 decidePolicyForSOAuthorizationLoadWithCurrentPolicy:(long long)arg2 forExtension:(NSString *)arg3 completionHandler:(void (^)(long long))arg4;
- (void)_webViewDidRequestPasswordForQuickLookDocument:(WKWebView *)arg1;
- (void)_webView:(WKWebView *)arg1 didFinishLoadForQuickLookDocumentInMainFrame:(NSData *)arg2;
- (void)_webView:(WKWebView *)arg1 didStartLoadForQuickLookDocumentInMainFrameWithFileName:(NSString *)arg2 uti:(NSString *)arg3;
- (void)_webView:(WKWebView *)arg1 webContentProcessDidTerminateWithReason:(long long)arg2;
- (void)_webView:(WKWebView *)arg1 contentRuleListWithIdentifier:(NSString *)arg2 performedAction:(_WKContentRuleListAction *)arg3 forURL:(NSURL *)arg4;
- (void)_webView:(WKWebView *)arg1 URL:(NSURL *)arg2 contentRuleListIdentifiers:(NSArray *)arg3 notifications:(NSArray *)arg4;
- (void)_webView:(WKWebView *)arg1 didFailNavigation:(WKNavigation *)arg2 withError:(NSError *)arg3 userInfo:(id <NSSecureCoding>)arg4;
- (void)_webView:(WKWebView *)arg1 didStartProvisionalNavigation:(WKNavigation *)arg2 userInfo:(id <NSSecureCoding>)arg3;
- (void)_webView:(WKWebView *)arg1 decidePolicyForNavigationAction:(WKNavigationAction *)arg2 preferences:(WKWebpagePreferences *)arg3 userInfo:(id <NSSecureCoding>)arg4 decisionHandler:(void (^)(long long, WKWebpagePreferences *))arg5;
- (void)_webView:(WKWebView *)arg1 decidePolicyForNavigationAction:(WKNavigationAction *)arg2 userInfo:(id <NSSecureCoding>)arg3 decisionHandler:(void (^)(long long, _WKWebsitePolicies *))arg4;
- (void)_webView:(WKWebView *)arg1 decidePolicyForNavigationAction:(WKNavigationAction *)arg2 decisionHandler:(void (^)(long long, _WKWebsitePolicies *))arg3;
- (void)_webViewDidRemoveNavigationGestureSnapshot:(WKWebView *)arg1;
- (void)_webView:(WKWebView *)arg1 willSnapshotBackForwardListItem:(WKBackForwardListItem *)arg2;
- (void)_webViewWillEndNavigationGesture:(WKWebView *)arg1 withNavigationToBackForwardListItem:(WKBackForwardListItem *)arg2;
- (void)_webViewDidEndNavigationGesture:(WKWebView *)arg1 withNavigationToBackForwardListItem:(WKBackForwardListItem *)arg2;
- (void)_webViewDidBeginNavigationGesture:(WKWebView *)arg1;
- (NSData *)_webCryptoMasterKeyForWebView:(WKWebView *)arg1;
- (void)_webViewWebProcessDidBecomeUnresponsive:(WKWebView *)arg1;
- (void)_webViewWebProcessDidBecomeResponsive:(WKWebView *)arg1;
- (void)_webViewWebProcessDidCrash:(WKWebView *)arg1;
- (void)_webView:(WKWebView *)arg1 renderingProgressDidChange:(NSUInteger)arg2;
- (void)_webView:(WKWebView *)arg1 navigation:(WKNavigation *)arg2 didSameDocumentNavigation:(long long)arg3;
- (void)_webView:(WKWebView *)arg1 navigationDidFinishDocumentLoad:(WKNavigation *)arg2;
- (void)_webViewDidCancelClientRedirect:(WKWebView *)arg1;
- (void)_webView:(WKWebView *)arg1 didPerformClientRedirectFromURL:(NSURL *)arg2 toURL:(NSURL *)arg3;
- (void)_webView:(WKWebView *)arg1 willPerformClientRedirectToURL:(NSURL *)arg2 delay:(double)arg3;
- (void)_webView:(WKWebView *)arg1 navigation:(WKNavigation *)arg2 didFailProvisionalLoadInSubframe:(WKFrameInfo *)arg3 withError:(NSError *)arg4;
@end

