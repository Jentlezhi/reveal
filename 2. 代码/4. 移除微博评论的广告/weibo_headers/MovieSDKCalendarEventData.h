//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface MovieSDKCalendarEventData : NSObject
{
    NSDate *_start;
    NSDate *_end;
    NSString *_title;
    NSString *_url;
    NSString *_location;
    NSNumber *_calinterval;
}

@property(retain, nonatomic) NSNumber *calinterval; // @synthesize calinterval=_calinterval;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSDate *end; // @synthesize end=_end;
@property(retain, nonatomic) NSDate *start; // @synthesize start=_start;
- (void).cxx_destruct;

@end

