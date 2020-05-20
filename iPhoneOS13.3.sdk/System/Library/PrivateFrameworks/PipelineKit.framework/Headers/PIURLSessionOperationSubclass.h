//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PipelineKit/PIOperationSubclass.h>


@class NSURL, NSURLSession, NSURLSessionConfiguration, NSURLSessionTask;

@interface PIURLSessionOperationSubclass : PIOperationSubclass <NSURLSessionTaskDelegate>
{
    NSURL *_url;
    NSURLSessionConfiguration *_sessionConfiguration;
    NSURLSession *_session;
    NSURLSessionTask *_sessionTask;
}

+ (id)noCacheConfiguration;
+ (id)defaultConfiguration;
@property(retain, nonatomic) NSURLSessionTask *sessionTask; // @synthesize sessionTask=_sessionTask;
@property(readonly, retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration; // @synthesize sessionConfiguration=_sessionConfiguration;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
// - (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)cleanup;
- (void)cancel;
- (void)execute;
- (id)initWithURL:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;

@end

