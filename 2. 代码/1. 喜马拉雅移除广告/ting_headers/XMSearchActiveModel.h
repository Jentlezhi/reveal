//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMTableCellModelProtocol-Protocol.h"

@class NSString, NSURL;

@interface XMSearchActiveModel : NSObject <XMTableCellModelProtocol>
{
    NSString *_search_word;
    NSString *_title;
    NSString *_subtitle;
    NSURL *_cover_path;
    NSURL *_cover_path_small;
    long long _type;
    long long _srcId;
    NSString *_urlString;
}

@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(nonatomic) long long srcId; // @synthesize srcId=_srcId;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSURL *cover_path_small; // @synthesize cover_path_small=_cover_path_small;
@property(retain, nonatomic) NSURL *cover_path; // @synthesize cover_path=_cover_path;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *search_word; // @synthesize search_word=_search_word;
- (void).cxx_destruct;
- (void)updateWithDic:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

