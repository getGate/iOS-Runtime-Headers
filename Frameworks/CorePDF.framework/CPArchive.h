/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CorePDF.framework/CorePDF
 */

@class NSData, NSMutableString;

@interface CPArchive : NSObject <CPDisposable> {
    NSMutableString *htmlString;
    NSMutableString *plainText;
    struct __CFArray { } *selections;
    NSData *webArchiveData;
}

- (void)addSelection:(struct CGPDFSelection { }*)arg1;
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (id)html;
- (id)init;
- (id)plainText;
- (id)webArchiveData;

@end