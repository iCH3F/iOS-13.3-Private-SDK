//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface SKUINavigationStackEnsureConsistencyRequest : NSObject <NSCopying>
{
    BOOL _operationDidComplete;
    long long _navigationControllerOperation;
}

@property(readonly, nonatomic) BOOL operationDidComplete; // @synthesize operationDidComplete=_operationDidComplete;
@property(readonly, nonatomic) long long navigationControllerOperation; // @synthesize navigationControllerOperation=_navigationControllerOperation;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithNavigationControllerOperation:(long long)arg1 operationDidComplete:(BOOL)arg2;

@end

