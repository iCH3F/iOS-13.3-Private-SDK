//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface IKOnReadyStateChangeMessage : NSObject
{
    unsigned int _readyState;
    unsigned int _statusCode;
    NSString *_statusText;
    NSError *_error;
}

@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *statusText; // @synthesize statusText=_statusText;
@property(readonly, nonatomic) unsigned int statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, nonatomic) unsigned int readyState; // @synthesize readyState=_readyState;
// - (void).cxx_destruct;
- (id)initWithReadyState:(unsigned int)arg1 statusCode:(unsigned int)arg2 statusText:(id)arg3 error:(id)arg4;

@end

