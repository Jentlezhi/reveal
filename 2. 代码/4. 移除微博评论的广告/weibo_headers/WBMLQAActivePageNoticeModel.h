//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBMLBaseModel.h"

@class NSString;

@interface WBMLQAActivePageNoticeModel : WBMLBaseModel
{
    NSString *_title;
    NSString *_text_left;
    NSString *_text_middle;
    NSString *_text_right;
    NSString *_scheme;
}

@property(copy, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(copy, nonatomic) NSString *text_right; // @synthesize text_right=_text_right;
@property(copy, nonatomic) NSString *text_middle; // @synthesize text_middle=_text_middle;
@property(copy, nonatomic) NSString *text_left; // @synthesize text_left=_text_left;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

