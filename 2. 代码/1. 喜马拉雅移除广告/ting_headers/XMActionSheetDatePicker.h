//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMAbstractActionSheetPicker.h"

@class NSCalendar, NSDate, NSLocale, NSTimeZone;

@interface XMActionSheetDatePicker : XMAbstractActionSheetPicker
{
    NSDate *_minimumDate;
    NSDate *_maximumDate;
    long long _minuteInterval;
    NSLocale *_locale;
    NSCalendar *_calendar;
    NSTimeZone *_timeZone;
    double _countDownDuration;
    CDUnknownBlockType _onActionSheetDone;
    CDUnknownBlockType _onActionSheetCancel;
    long long _datePickerMode;
    NSDate *_selectedDate;
}

+ (id)showPickerWithTitle:(id)arg1 datePickerMode:(long long)arg2 selectedDate:(id)arg3 minimumDate:(id)arg4 maximumDate:(id)arg5 doneBlock:(CDUnknownBlockType)arg6 cancelBlock:(CDUnknownBlockType)arg7 origin:(id)arg8;
@property(retain, nonatomic) NSDate *selectedDate; // @synthesize selectedDate=_selectedDate;
@property(nonatomic) long long datePickerMode; // @synthesize datePickerMode=_datePickerMode;
@property(copy, nonatomic) CDUnknownBlockType onActionSheetCancel; // @synthesize onActionSheetCancel=_onActionSheetCancel;
@property(copy, nonatomic) CDUnknownBlockType onActionSheetDone; // @synthesize onActionSheetDone=_onActionSheetDone;
@property(nonatomic) double countDownDuration; // @synthesize countDownDuration=_countDownDuration;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(copy, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(nonatomic) long long minuteInterval; // @synthesize minuteInterval=_minuteInterval;
@property(retain, nonatomic) NSDate *maximumDate; // @synthesize maximumDate=_maximumDate;
@property(retain, nonatomic) NSDate *minimumDate; // @synthesize minimumDate=_minimumDate;
- (void).cxx_destruct;
- (void)eventForDatePicker:(id)arg1;
- (void)notifyTarget:(id)arg1 didCancelWithAction:(SEL)arg2 origin:(id)arg3;
- (void)notifyTarget:(id)arg1 didSucceedWithAction:(SEL)arg2 origin:(id)arg3;
- (id)configuredPickerView;
- (id)initWithTitle:(id)arg1 datePickerMode:(long long)arg2 selectedDate:(id)arg3 target:(id)arg4 action:(SEL)arg5 origin:(id)arg6 cancelAction:(SEL)arg7;
- (id)initWithTitle:(id)arg1 datePickerMode:(long long)arg2 selectedDate:(id)arg3 target:(id)arg4 action:(SEL)arg5 origin:(id)arg6;
- (id)initWithTitle:(id)arg1 datePickerMode:(long long)arg2 selectedDate:(id)arg3 doneBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5 origin:(id)arg6;

@end

