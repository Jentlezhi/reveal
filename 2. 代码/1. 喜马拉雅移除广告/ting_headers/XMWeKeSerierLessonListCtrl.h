//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMWeKeBaseScrollCtrl.h"

@class CDZAttributedString, XMWeKeSeriesLesson;

@interface XMWeKeSerierLessonListCtrl : XMWeKeBaseScrollCtrl
{
    XMWeKeSeriesLesson *_lesson;
    CDZAttributedString *_stringFormat;
}

@property(retain, nonatomic) CDZAttributedString *stringFormat; // @synthesize stringFormat=_stringFormat;
@property(retain, nonatomic) XMWeKeSeriesLesson *lesson; // @synthesize lesson=_lesson;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)clickMoreButton:(id)arg1;
- (void)loadMoreData:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

