//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSError, NSURLRequest, NSURLResponse, WKWebProcessPlugInBrowserContextController, WKWebProcessPlugInFrame, WKWebProcessPlugInScriptWorld;

@protocol WKWebProcessPlugInLoadDelegate <NSObject>

@optional
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 frame:(WKWebProcessPlugInFrame *)arg2 didFailLoadForResource:(NSUInteger)arg3 error:(NSError *)arg4;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 frame:(WKWebProcessPlugInFrame *)arg2 didFinishLoadForResource:(NSUInteger)arg3;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 frame:(WKWebProcessPlugInFrame *)arg2 didInitiateLoadForResource:(NSUInteger)arg3 request:(NSURLRequest *)arg4;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 frame:(WKWebProcessPlugInFrame *)arg2 didInitiateLoadForResource:(NSUInteger)arg3 request:(NSURLRequest *)arg4 pageIsProvisionallyLoading:(BOOL)arg5;
- (NSURLRequest *)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 frame:(WKWebProcessPlugInFrame *)arg2 willSendRequest:(NSURLRequest *)arg3 redirectResponse:(NSURLResponse *)arg4;
- (NSURLRequest *)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 frame:(WKWebProcessPlugInFrame *)arg2 willSendRequestForResource:(NSUInteger)arg3 request:(NSURLRequest *)arg4 redirectResponse:(NSURLResponse *)arg5;
- (NSUInteger)webProcessPlugInBrowserContextControllerRenderingProgressEvents:(WKWebProcessPlugInBrowserContextController *)arg1;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didFirstVisuallyNonEmptyLayoutForFrame:(WKWebProcessPlugInFrame *)arg2;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 renderingProgressDidChange:(NSUInteger)arg2;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didLayoutForFrame:(WKWebProcessPlugInFrame *)arg2;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didHandleOnloadEventsForFrame:(WKWebProcessPlugInFrame *)arg2;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didRemoveFrameFromHierarchy:(WKWebProcessPlugInFrame *)arg2;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 globalObjectIsAvailableForFrame:(WKWebProcessPlugInFrame *)arg2 inScriptWorld:(WKWebProcessPlugInScriptWorld *)arg3;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didClearWindowObjectForFrame:(WKWebProcessPlugInFrame *)arg2 inScriptWorld:(WKWebProcessPlugInScriptWorld *)arg3;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didSameDocumentNavigation:(long long)arg2 forFrame:(WKWebProcessPlugInFrame *)arg3;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didFinishLoadForFrame:(WKWebProcessPlugInFrame *)arg2;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didFailLoadWithErrorForFrame:(WKWebProcessPlugInFrame *)arg2 error:(NSError *)arg3;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didFailProvisionalLoadWithErrorForFrame:(WKWebProcessPlugInFrame *)arg2 error:(NSError *)arg3;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didFinishDocumentLoadForFrame:(WKWebProcessPlugInFrame *)arg2;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didCommitLoadForFrame:(WKWebProcessPlugInFrame *)arg2;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(WKWebProcessPlugInFrame *)arg2;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didStartProvisionalLoadForFrame:(WKWebProcessPlugInFrame *)arg2;
@end

