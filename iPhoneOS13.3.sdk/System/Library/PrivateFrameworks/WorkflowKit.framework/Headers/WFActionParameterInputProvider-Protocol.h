//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, NSOrderedSet, WFAction, WFParameter;

@protocol WFActionParameterInputProvider <NSObject>
- (BOOL)action:(WFAction *)arg1 canProvideInputForParameter:(WFParameter *)arg2;
- (void)action:(WFAction *)arg1 provideInputForParameters:(NSOrderedSet *)arg2 withDefaultStates:(NSDictionary *)arg3 completionHandler:(void (^)(BOOL, NSDictionary *))arg4;
@end

