//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphIngestProcessor-Protocol.h>

@protocol OS_os_log;

@interface PGGraphIngestMusicProcessor : NSObject <PGGraphIngestProcessor>
{
    NSObject<OS_os_log> *_loggingConnection;
}

@property(readonly, nonatomic) NSObject<OS_os_log> *loggingConnection; // @synthesize loggingConnection=_loggingConnection;
// - (void).cxx_destruct;
- (id)_ingestStreamEventSession:(id)arg1 graph:(id)arg2 performerNodesByName:(id)arg3;
- (void)processMusicForGraph:(id)arg1 progressBlock:(id /* CDUnknownBlockType */)arg2;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(id /* CDUnknownBlockType */)arg2;
- (BOOL)shouldRunWithGraphUpdate:(id)arg1;

@end

