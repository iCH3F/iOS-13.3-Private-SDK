//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSProgress, NSURL, PHMediaFormatConversionRequest;

@interface PHMediaFormatConversionSinglePassVideoProgressObserver : NSObject
{
    NSProgress *_progress;
    PHMediaFormatConversionRequest *_request;
    NSURL *_observedFileURL;
    NSFileHandle *_observedFileHandle;
    NSUInteger _lastFileSize;
}

@property NSUInteger lastFileSize; // @synthesize lastFileSize=_lastFileSize;
@property(retain) NSFileHandle *observedFileHandle; // @synthesize observedFileHandle=_observedFileHandle;
@property(retain) NSURL *observedFileURL; // @synthesize observedFileURL=_observedFileURL;
@property __weak PHMediaFormatConversionRequest *request; // @synthesize request=_request;
@property(retain) NSProgress *progress; // @synthesize progress=_progress;
// - (void).cxx_destruct;
- (void)stopObserving;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)startObservingProgress:(id)arg1 forRequest:(id)arg2;

@end

