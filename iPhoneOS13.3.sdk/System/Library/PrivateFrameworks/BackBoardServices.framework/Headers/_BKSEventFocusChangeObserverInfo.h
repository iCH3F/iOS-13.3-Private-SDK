//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSInvalidatable-Protocol.h>

@interface _BKSEventFocusChangeObserverInfo : NSObject <BSInvalidatable>
{
    BOOL _valid;
    NSUInteger _propertyUpdateGeneration;
}

@property(getter=isValid) BOOL valid; // @synthesize valid=_valid;
@property NSUInteger propertyUpdateGeneration; // @synthesize propertyUpdateGeneration=_propertyUpdateGeneration;
- (void)invalidate;
- (id)init;

@end

