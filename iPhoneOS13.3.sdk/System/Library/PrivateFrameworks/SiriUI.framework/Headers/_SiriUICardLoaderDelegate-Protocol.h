//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SFCard, _SiriUICardLoader;

@protocol _SiriUICardLoaderDelegate <NSObject>
- (BOOL)cardLoader:(_SiriUICardLoader *)arg1 loadCard:(SFCard *)arg2 withCompletionHandler:(void (^)(SFCard *, NSError *))arg3;
- (BOOL)cardLoader:(_SiriUICardLoader *)arg1 shouldLoadCard:(SFCard *)arg2;
@end

