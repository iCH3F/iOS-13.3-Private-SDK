//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@protocol NSURLSessionTaskDelegate;

@interface _RUILoaderSessionDelegateAdapter : NSObject <NSURLSessionTaskDelegate>
{
    NSObject<NSURLSessionTaskDelegate> *_delegate;
}

@property(nonatomic) __weak NSObject<NSURLSessionTaskDelegate> *delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;

@end

