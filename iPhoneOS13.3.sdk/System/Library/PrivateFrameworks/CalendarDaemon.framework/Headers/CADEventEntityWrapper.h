//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/CADEntityWrapper.h>

@interface CADEventEntityWrapper : CADEntityWrapper
{
    double _occurrenceDate;
}

+ (BOOL)supportsSecureCoding;
- (id)occurrenceDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCalEntity:(void )arg1 propertiesToLoad:(id)arg2 occurrenceDate:(double)arg3;

@end

