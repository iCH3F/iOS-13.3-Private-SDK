//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexWeb/SWMessageHandler-Protocol.h>
#import <SilexWeb/SWPresentationManager-Protocol.h>

@protocol SWLogger, SWScriptsManager;

@interface SWPresentationManager : NSObject <SWMessageHandler, SWPresentationManager>
{
    NSUInteger _presentationState;
    double _height;
    id /* CDUnknownBlockType */ loadBlock;
    id /* CDUnknownBlockType */ presentableBlock;
    id <SWScriptsManager> _scriptsManager;
    id <SWLogger> _logger;
}

@property(readonly, nonatomic) id <SWLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SWScriptsManager> scriptsManager; // @synthesize scriptsManager=_scriptsManager;
@property(copy, nonatomic, setter=onPresentable:) id /* CDUnknownBlockType */ presentableBlock; // @synthesize presentableBlock;
@property(copy, nonatomic, setter=onLoad:) id /* CDUnknownBlockType */ loadBlock; // @synthesize loadBlock;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) NSUInteger presentationState; // @synthesize presentationState=_presentationState;
// - (void).cxx_destruct;
- (id)descriptionForPresentationState:(NSUInteger)arg1;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;
- (void)refresh;
- (id)initWithWebContentScriptsManager:(id)arg1 messageHandlerManager:(id)arg2 documentStateProvider:(id)arg3 logger:(id)arg4;

@end

