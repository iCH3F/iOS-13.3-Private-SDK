//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface _UIHostedWindowHostingHandle : NSObject <NSSecureCoding>
{
    int _pid;
    unsigned int _contextID;
    CGAffineTransform _rootLayerTransform;
    CGRect _rootLayerFrame;
}

+ (id)hostedWindowHostingHandleWithContextID:(unsigned int)arg1 rootLayerTransform:(CGAffineTransform)arg2 rootLayerFrame:(CGRect)arg3;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) CGRect rootLayerFrame; // @synthesize rootLayerFrame=_rootLayerFrame;
@property(readonly, nonatomic) CGAffineTransform rootLayerTransform; // @synthesize rootLayerTransform=_rootLayerTransform;
@property(readonly, nonatomic) unsigned int contextID; // @synthesize contextID=_contextID;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

