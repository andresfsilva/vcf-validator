
#line 1 "cpp/src/bioformats/vcf/vcf_v41.ragel"
#include <cstdio>

#include "validator.hpp"


#line 712 "cpp/src/bioformats/vcf/vcf_v41.ragel"


namespace
{
  
#line 15 "cpp/src/bioformats/vcf/validator_detail.hpp"
static const int vcf_start = 1;
static const int vcf_first_final = 623;
static const int vcf_error = 0;

static const int vcf_en_main = 1;
static const int vcf_en_main_meta_section = 20;
static const int vcf_en_main_body_section = 624;
static const int vcf_en_meta_section_skip = 621;
static const int vcf_en_body_section_skip = 622;


#line 718 "cpp/src/bioformats/vcf/vcf_v41.ragel"

}

namespace opencb
{
  namespace vcf
  {
    template <typename Configuration>
    Parser<Configuration>::Parser(std::shared_ptr<Source> const & source,
                                  std::shared_ptr<std::vector<Record>> const & records
    )
    : ParsingState{source, records}
    {
      
#line 42 "cpp/src/bioformats/vcf/validator_detail.hpp"
	{
	cs = vcf_start;
	}

#line 733 "cpp/src/bioformats/vcf/vcf_v41.ragel"

    }

    template <typename Configuration>
    void Parser<Configuration>::parse(std::vector<char> const & text)
    {
      char const * p = &text[0];
      char const * pe = &text[0] + text.size();
      char const * eof = nullptr;

      clear_records();
      parse_buffer(p, pe, eof);
    }

    template <typename Configuration>
    void Parser<Configuration>::parse(std::string const & text)
    {
      char const * p = text.data();
      char const * pe = text.data() + text.size();
      char const * eof = nullptr;

      clear_records();
      parse_buffer(p, pe, eof);
    }

    template <typename Configuration>
    void Parser<Configuration>::end()
    {
      char const * empty = "";
      clear_records();
      parse_buffer(empty, empty, empty);
    }

    template <typename Configuration>
    bool Parser<Configuration>::is_valid() const
    {
      return cs >= 
#line 85 "cpp/src/bioformats/vcf/validator_detail.hpp"
623
#line 769 "cpp/src/bioformats/vcf/vcf_v41.ragel"
;
    }

    template <typename Configuration>
    void Parser<Configuration>::parse_buffer(char const * p, char const * pe, char const * eof)
    {
      
#line 95 "cpp/src/bioformats/vcf/validator_detail.hpp"
	{
	if ( p == pe )
		goto _test_eof;
	switch ( cs )
	{
case 1:
	if ( (*p) == 35 )
		goto st2;
	goto tr0;
tr0:
#line 45 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_fileformat_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr14:
#line 191 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_fileformat_section_error(*this,
            "Fileformat is not a sequence of alphanumeric and/or punctuation characters");
        p--; {goto st621;}
    }
#line 45 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_fileformat_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr18:
#line 45 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_fileformat_section_error(*this);
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
#line 303 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_header_section_error(*this, "The header line does not start with the mandatory columns: CHROM, POS, ID, REF, ALT, QUAL, FILTER and INFO");
        p--; {goto st622;}
    }
#line 63 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_header_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr20:
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
#line 303 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_header_section_error(*this, "The header line does not start with the mandatory columns: CHROM, POS, ID, REF, ALT, QUAL, FILTER and INFO");
        p--; {goto st622;}
    }
#line 63 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_header_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr23:
#line 198 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in ALT metadata");
        p--; {goto st621;}
    }
#line 221 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in FILTER metadata");
        p--; {goto st621;}
    }
#line 227 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in FORMAT metadata");
        p--; {goto st621;}
    }
#line 243 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in INFO metadata");
        p--; {goto st621;}
    }
#line 209 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in assembly metadata");
        p--; {goto st621;}
    }
#line 215 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in contig metadata");
        p--; {goto st621;}
    }
#line 271 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in SAMPLE metadata");
        p--; {goto st621;}
    }
#line 259 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in PEDIGREE metadata");
        p--; {goto st621;}
    }
#line 265 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in pedigreeDB metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr34:
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr127:
#line 198 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in ALT metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr135:
#line 203 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "ALT metadata ID is not prefixed by DEL/INS/DUP/INV/CNV and suffixed by ':' and a text sequence");
        p--; {goto st621;}
    }
#line 198 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in ALT metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr154:
#line 292 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata description string is not valid");
        p--; {goto st621;}
    }
#line 198 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in ALT metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr159:
#line 287 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata ID contains a character different from alphanumeric, dot, underscore and dash");
        p--; {goto st621;}
    }
#line 198 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in ALT metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr167:
#line 221 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in FILTER metadata");
        p--; {goto st621;}
    }
#line 227 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in FORMAT metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr170:
#line 221 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in FILTER metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr180:
#line 287 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata ID contains a character different from alphanumeric, dot, underscore and dash");
        p--; {goto st621;}
    }
#line 221 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in FILTER metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr200:
#line 292 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata description string is not valid");
        p--; {goto st621;}
    }
#line 221 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in FILTER metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr211:
#line 227 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in FORMAT metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr221:
#line 287 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata ID contains a character different from alphanumeric, dot, underscore and dash");
        p--; {goto st621;}
    }
#line 227 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in FORMAT metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr234:
#line 232 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "FORMAT metadata Number is not a number, A, R, G or dot");
        p--; {goto st621;}
    }
#line 227 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in FORMAT metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr243:
#line 253 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "INFO metadata Type is not a Integer, Float, Flag, Character or String");
        p--; {goto st621;}
    }
#line 227 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in FORMAT metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr261:
#line 292 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata description string is not valid");
        p--; {goto st621;}
    }
#line 227 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in FORMAT metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr273:
#line 243 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in INFO metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr282:
#line 287 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata ID contains a character different from alphanumeric, dot, underscore and dash");
        p--; {goto st621;}
    }
#line 243 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in INFO metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr295:
#line 248 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "INFO metadata Number is not a number, A, R, G or dot");
        p--; {goto st621;}
    }
#line 243 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in INFO metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr304:
#line 253 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "INFO metadata Type is not a Integer, Float, Flag, Character or String");
        p--; {goto st621;}
    }
#line 243 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in INFO metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr322:
#line 292 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata description string is not valid");
        p--; {goto st621;}
    }
#line 243 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in INFO metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr334:
#line 259 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in PEDIGREE metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr344:
#line 287 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata ID contains a character different from alphanumeric, dot, underscore and dash");
        p--; {goto st621;}
    }
#line 259 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in PEDIGREE metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr356:
#line 271 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in SAMPLE metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr367:
#line 287 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata ID contains a character different from alphanumeric, dot, underscore and dash");
        p--; {goto st621;}
    }
#line 271 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in SAMPLE metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr372:
#line 287 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata ID contains a character different from alphanumeric, dot, underscore and dash");
        p--; {goto st621;}
    }
#line 276 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "SAMPLE metadata Genomes is not a valid string (maybe it contains quotes?)");
        p--; {goto st621;}
    }
#line 271 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in SAMPLE metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr374:
#line 276 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "SAMPLE metadata Genomes is not a valid string (maybe it contains quotes?)");
        p--; {goto st621;}
    }
#line 271 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in SAMPLE metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr384:
#line 276 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "SAMPLE metadata Genomes is not a valid string (maybe it contains quotes?)");
        p--; {goto st621;}
    }
#line 281 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "SAMPLE metadata Mixture is not a valid string (maybe it contains quotes?)");
        p--; {goto st621;}
    }
#line 271 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in SAMPLE metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr387:
#line 281 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "SAMPLE metadata Mixture is not a valid string (maybe it contains quotes?)");
        p--; {goto st621;}
    }
#line 271 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in SAMPLE metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr397:
#line 281 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "SAMPLE metadata Mixture is not a valid string (maybe it contains quotes?)");
        p--; {goto st621;}
    }
#line 292 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata description string is not valid");
        p--; {goto st621;}
    }
#line 271 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in SAMPLE metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr400:
#line 292 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata description string is not valid");
        p--; {goto st621;}
    }
#line 271 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in SAMPLE metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr418:
#line 209 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in assembly metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr427:
#line 297 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata URL is not valid");
        p--; {goto st621;}
    }
#line 209 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in assembly metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr434:
#line 215 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in contig metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr445:
#line 287 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata ID contains a character different from alphanumeric, dot, underscore and dash");
        p--; {goto st621;}
    }
#line 215 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in contig metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr458:
#line 265 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in pedigreeDB metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr470:
#line 297 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata URL is not valid");
        p--; {goto st621;}
    }
#line 265 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in pedigreeDB metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	goto st0;
tr478:
#line 303 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_header_section_error(*this, "The header line does not start with the mandatory columns: CHROM, POS, ID, REF, ALT, QUAL, FILTER and INFO");
        p--; {goto st622;}
    }
#line 63 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_header_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr517:
#line 63 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_header_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr529:
#line 311 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Chromosome is not a string without colons or whitespaces, optionally wrapped with angle brackets (<>)");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr533:
#line 317 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Position is not a positive number");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr538:
#line 323 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "ID is not a single dot or a list of strings without semicolons or whitespaces");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr543:
#line 329 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Reference is not a string of bases");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr547:
#line 335 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Alternate is not a single dot or a comma-separated list of bases");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr556:
#line 341 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Quality is not a single dot or a positive number");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr566:
#line 347 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Filter is not a single dot or a semicolon-separated list of strings");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr574:
#line 358 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info key is not a sequence of alphanumeric and/or punctuation characters");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr595:
#line 459 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Format is not a colon-separated list of alphanumeric strings");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr600:
#line 472 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        std::ostringstream message_stream;
        message_stream << "Sample #" << (n_columns - 9) << " does not start with a valid genotype";
        ErrorPolicy::handle_body_section_error(*this, message_stream.str());
        p--; {goto st622;}
    }
#line 465 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        std::ostringstream message_stream;
        message_stream << "Sample #" << (n_columns - 9) << " is not a valid string";
        ErrorPolicy::handle_body_section_error(*this, message_stream.str());
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr612:
#line 465 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        std::ostringstream message_stream;
        message_stream << "Sample #" << (n_columns - 9) << " is not a valid string";
        ErrorPolicy::handle_body_section_error(*this, message_stream.str());
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr618:
#line 363 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info field value is not a comma-separated list of valid strings (maybe it contains whitespaces?)");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr620:
#line 453 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info 1000G is not a flag (with 1/0/no value)");
        p--; {goto st622;}
    }
#line 358 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info key is not a sequence of alphanumeric and/or punctuation characters");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr622:
#line 453 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info 1000G is not a flag (with 1/0/no value)");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr629:
#line 368 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info AA value is not a single dot or a string of bases");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr633:
#line 373 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info AC value is not a comma-separated list of numbers");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr637:
#line 378 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info AF value is not a comma-separated list of numbers");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr647:
#line 383 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info AN value is not an integer number");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr652:
#line 388 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info BQ value is not a number");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr666:
#line 393 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info CIGAR value is not an alphanumeric string");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr670:
#line 398 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info DB is not a flag (with 1/0/no value)");
        p--; {goto st622;}
    }
#line 358 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info key is not a sequence of alphanumeric and/or punctuation characters");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr672:
#line 398 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info DB is not a flag (with 1/0/no value)");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr675:
#line 403 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info DP value is not an integer number");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr681:
#line 408 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info END value is not an integer number");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr686:
#line 413 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info H2 is not a flag (with 1/0/no value)");
        p--; {goto st622;}
    }
#line 358 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info key is not a sequence of alphanumeric and/or punctuation characters");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr688:
#line 413 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info H2 is not a flag (with 1/0/no value)");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr690:
#line 418 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info H3 is not a flag (with 1/0/no value)");
        p--; {goto st622;}
    }
#line 358 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info key is not a sequence of alphanumeric and/or punctuation characters");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr692:
#line 418 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info H3 is not a flag (with 1/0/no value)");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr698:
#line 428 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info MQ0 value is not an integer number");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr701:
#line 423 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info MQ value is not a number");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr712:
#line 433 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info NS value is not an integer number");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr718:
#line 438 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info SB value is not a number");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr732:
#line 443 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info SOMATIC is not a flag (with 1/0/no value)");
        p--; {goto st622;}
    }
#line 358 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info key is not a sequence of alphanumeric and/or punctuation characters");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr734:
#line 443 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info SOMATIC is not a flag (with 1/0/no value)");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr744:
#line 448 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info VALIDATED is not a flag (with 1/0/no value)");
        p--; {goto st622;}
    }
#line 358 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info key is not a sequence of alphanumeric and/or punctuation characters");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr746:
#line 448 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info VALIDATED is not a flag (with 1/0/no value)");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
tr808:
#line 63 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_header_section_error(*this);
        p--; {goto st622;}
    }
#line 311 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Chromosome is not a string without colons or whitespaces, optionally wrapped with angle brackets (<>)");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	goto st0;
#line 1410 "cpp/src/bioformats/vcf/validator_detail.hpp"
st0:
cs = 0;
	goto _out;
st2:
	if ( ++p == pe )
		goto _test_eof2;
case 2:
	if ( (*p) == 35 )
		goto st3;
	goto tr0;
st3:
	if ( ++p == pe )
		goto _test_eof3;
case 3:
	if ( (*p) == 102 )
		goto st4;
	goto tr0;
st4:
	if ( ++p == pe )
		goto _test_eof4;
case 4:
	if ( (*p) == 105 )
		goto st5;
	goto tr0;
st5:
	if ( ++p == pe )
		goto _test_eof5;
case 5:
	if ( (*p) == 108 )
		goto st6;
	goto tr0;
st6:
	if ( ++p == pe )
		goto _test_eof6;
case 6:
	if ( (*p) == 101 )
		goto st7;
	goto tr0;
st7:
	if ( ++p == pe )
		goto _test_eof7;
case 7:
	if ( (*p) == 102 )
		goto st8;
	goto tr0;
st8:
	if ( ++p == pe )
		goto _test_eof8;
case 8:
	if ( (*p) == 111 )
		goto st9;
	goto tr0;
st9:
	if ( ++p == pe )
		goto _test_eof9;
case 9:
	if ( (*p) == 114 )
		goto st10;
	goto tr0;
st10:
	if ( ++p == pe )
		goto _test_eof10;
case 10:
	if ( (*p) == 109 )
		goto st11;
	goto tr0;
st11:
	if ( ++p == pe )
		goto _test_eof11;
case 11:
	if ( (*p) == 97 )
		goto st12;
	goto tr0;
st12:
	if ( ++p == pe )
		goto _test_eof12;
case 12:
	if ( (*p) == 116 )
		goto st13;
	goto tr0;
st13:
	if ( ++p == pe )
		goto _test_eof13;
case 13:
	if ( (*p) == 61 )
		goto st14;
	goto tr0;
st14:
	if ( ++p == pe )
		goto _test_eof14;
case 14:
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr15;
	goto tr14;
tr15:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st15;
tr17:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st15;
st15:
	if ( ++p == pe )
		goto _test_eof15;
case 15:
#line 1525 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 10 )
		goto tr16;
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr17;
	goto tr14;
tr16:
#line 76 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_fileformat(*this);
    }
#line 27 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_newline(*this);
        ++n_lines;
        n_columns = 1;

        if (n_lines % 10000 == 0) {
            std::cout << "Lines read: " << n_lines << std::endl;
        }
    }
	goto st16;
st16:
	if ( ++p == pe )
		goto _test_eof16;
case 16:
#line 1551 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 35 )
		goto st17;
	goto tr18;
st17:
	if ( ++p == pe )
		goto _test_eof17;
case 17:
	switch( (*p) ) {
		case 35: goto st18;
		case 67: goto st354;
	}
	goto tr20;
st18:
	if ( ++p == pe )
		goto _test_eof18;
case 18:
	switch( (*p) ) {
		case 65: goto tr26;
		case 70: goto tr27;
		case 73: goto tr28;
		case 80: goto tr29;
		case 83: goto tr30;
		case 95: goto tr25;
		case 97: goto tr31;
		case 99: goto tr32;
		case 112: goto tr33;
	}
	if ( (*p) < 62 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr24;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 60 )
				goto tr24;
		} else
			goto tr25;
	} else if ( (*p) > 64 ) {
		if ( (*p) < 91 ) {
			if ( 66 <= (*p) && (*p) <= 90 )
				goto tr25;
		} else if ( (*p) > 96 ) {
			if ( (*p) > 122 ) {
				if ( 123 <= (*p) && (*p) <= 126 )
					goto tr24;
			} else if ( (*p) >= 98 )
				goto tr25;
		} else
			goto tr24;
	} else
		goto tr24;
	goto tr23;
tr24:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st19;
tr36:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st19;
st19:
	if ( ++p == pe )
		goto _test_eof19;
case 19:
#line 1623 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 10 )
		goto tr35;
	if ( (*p) > 60 ) {
		if ( 62 <= (*p) && (*p) <= 126 )
			goto tr36;
	} else if ( (*p) >= 32 )
		goto tr36;
	goto tr34;
tr35:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
#line 148 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        try {
          ParsePolicy::handle_meta_line(*this);
        } catch (ParsingError ex) {
          ErrorPolicy::handle_meta_section_error(*this, ex.what());
        }
    }
#line 27 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_newline(*this);
        ++n_lines;
        n_columns = 1;

        if (n_lines % 10000 == 0) {
            std::cout << "Lines read: " << n_lines << std::endl;
        }
    }
	goto st20;
tr49:
#line 148 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        try {
          ParsePolicy::handle_meta_line(*this);
        } catch (ParsingError ex) {
          ErrorPolicy::handle_meta_section_error(*this, ex.what());
        }
    }
#line 27 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_newline(*this);
        ++n_lines;
        n_columns = 1;

        if (n_lines % 10000 == 0) {
            std::cout << "Lines read: " << n_lines << std::endl;
        }
    }
	goto st20;
st20:
	if ( ++p == pe )
		goto _test_eof20;
case 20:
#line 1680 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 35 )
		goto st17;
	goto tr20;
tr25:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st21;
tr37:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st21;
st21:
	if ( ++p == pe )
		goto _test_eof21;
case 21:
#line 1704 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr34;
tr38:
#line 140 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_typeid(*this);
    }
	goto st22;
st22:
	if ( ++p == pe )
		goto _test_eof22;
case 22:
#line 1741 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 60 )
		goto st25;
	if ( 32 <= (*p) && (*p) <= 126 )
		goto st23;
	goto tr34;
st23:
	if ( ++p == pe )
		goto _test_eof23;
case 23:
	if ( 32 <= (*p) && (*p) <= 126 )
		goto tr41;
	goto tr34;
tr41:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st24;
tr42:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st24;
st24:
	if ( ++p == pe )
		goto _test_eof24;
case 24:
#line 1774 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 10 )
		goto tr35;
	if ( 32 <= (*p) && (*p) <= 126 )
		goto tr42;
	goto tr34;
st25:
	if ( ++p == pe )
		goto _test_eof25;
case 25:
	switch( (*p) ) {
		case 47: goto st26;
		case 95: goto tr44;
	}
	if ( (*p) < 61 ) {
		if ( (*p) < 45 ) {
			if ( 32 <= (*p) && (*p) <= 44 )
				goto st26;
		} else if ( (*p) > 46 ) {
			if ( (*p) > 57 ) {
				if ( 58 <= (*p) && (*p) <= 59 )
					goto st26;
			} else if ( (*p) >= 48 )
				goto tr45;
		} else
			goto tr44;
	} else if ( (*p) > 64 ) {
		if ( (*p) < 91 ) {
			if ( 65 <= (*p) && (*p) <= 90 )
				goto tr45;
		} else if ( (*p) > 96 ) {
			if ( (*p) > 122 ) {
				if ( 123 <= (*p) && (*p) <= 126 )
					goto st26;
			} else if ( (*p) >= 97 )
				goto tr45;
		} else
			goto st26;
	} else
		goto st26;
	goto tr34;
st26:
	if ( ++p == pe )
		goto _test_eof26;
case 26:
	if ( 32 <= (*p) && (*p) <= 126 )
		goto tr46;
	goto tr34;
tr46:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st27;
tr47:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st27;
st27:
	if ( ++p == pe )
		goto _test_eof27;
case 27:
#line 1842 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 62 )
		goto tr48;
	if ( 32 <= (*p) && (*p) <= 126 )
		goto tr47;
	goto tr34;
tr48:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st28;
tr87:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st28;
st28:
	if ( ++p == pe )
		goto _test_eof28;
case 28:
#line 1872 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr49;
		case 62: goto tr48;
	}
	if ( 32 <= (*p) && (*p) <= 126 )
		goto tr47;
	goto tr34;
tr44:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st29;
st29:
	if ( ++p == pe )
		goto _test_eof29;
case 29:
#line 1890 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 47: goto tr46;
		case 95: goto tr50;
	}
	if ( (*p) < 58 ) {
		if ( (*p) < 45 ) {
			if ( 32 <= (*p) && (*p) <= 44 )
				goto tr46;
		} else if ( (*p) > 46 ) {
			if ( 48 <= (*p) && (*p) <= 57 )
				goto tr51;
		} else
			goto tr50;
	} else if ( (*p) > 64 ) {
		if ( (*p) < 91 ) {
			if ( 65 <= (*p) && (*p) <= 90 )
				goto tr51;
		} else if ( (*p) > 96 ) {
			if ( (*p) > 122 ) {
				if ( 123 <= (*p) && (*p) <= 126 )
					goto tr46;
			} else if ( (*p) >= 97 )
				goto tr51;
		} else
			goto tr46;
	} else
		goto tr46;
	goto tr34;
tr50:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st30;
tr52:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st30;
st30:
	if ( ++p == pe )
		goto _test_eof30;
case 30:
#line 1939 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 47: goto tr47;
		case 62: goto tr48;
		case 95: goto tr52;
	}
	if ( (*p) < 58 ) {
		if ( (*p) < 45 ) {
			if ( 32 <= (*p) && (*p) <= 44 )
				goto tr47;
		} else if ( (*p) > 46 ) {
			if ( 48 <= (*p) && (*p) <= 57 )
				goto tr53;
		} else
			goto tr52;
	} else if ( (*p) > 64 ) {
		if ( (*p) < 91 ) {
			if ( 65 <= (*p) && (*p) <= 90 )
				goto tr53;
		} else if ( (*p) > 96 ) {
			if ( (*p) > 122 ) {
				if ( 123 <= (*p) && (*p) <= 126 )
					goto tr47;
			} else if ( (*p) >= 97 )
				goto tr53;
		} else
			goto tr47;
	} else
		goto tr47;
	goto tr34;
tr53:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st31;
tr51:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st31;
st31:
	if ( ++p == pe )
		goto _test_eof31;
case 31:
#line 1989 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 47: goto tr47;
		case 61: goto tr54;
		case 62: goto tr48;
		case 95: goto tr53;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 45 ) {
			if ( 32 <= (*p) && (*p) <= 44 )
				goto tr47;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr47;
		} else
			goto tr53;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr47;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr47;
		} else
			goto tr53;
	} else
		goto tr53;
	goto tr34;
tr54:
#line 144 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_key(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st32;
tr126:
#line 144 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_key(*this);
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st32;
st32:
	if ( ++p == pe )
		goto _test_eof32;
case 32:
#line 2045 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 34: goto tr57;
		case 44: goto tr47;
		case 62: goto tr48;
	}
	if ( (*p) > 13 ) {
		if ( 32 <= (*p) && (*p) <= 126 )
			goto tr56;
	} else if ( (*p) >= 9 )
		goto tr55;
	goto tr34;
tr55:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st33;
tr58:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st33;
tr71:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st33;
st33:
	if ( ++p == pe )
		goto _test_eof33;
case 33:
#line 2087 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 44: goto tr59;
		case 62: goto tr60;
	}
	if ( (*p) > 13 ) {
		if ( 32 <= (*p) && (*p) <= 126 )
			goto tr58;
	} else if ( (*p) >= 9 )
		goto tr58;
	goto tr34;
tr59:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st34;
st34:
	if ( ++p == pe )
		goto _test_eof34;
case 34:
#line 2108 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 95 )
		goto tr61;
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto tr61;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr62;
		} else if ( (*p) >= 65 )
			goto tr62;
	} else
		goto tr62;
	goto tr34;
tr61:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st35;
st35:
	if ( ++p == pe )
		goto _test_eof35;
case 35:
#line 2133 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 95 )
		goto st35;
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto st35;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr64;
		} else if ( (*p) >= 65 )
			goto tr64;
	} else
		goto tr64;
	goto tr34;
tr62:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st36;
tr64:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st36;
st36:
	if ( ++p == pe )
		goto _test_eof36;
case 36:
#line 2168 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 61: goto tr65;
		case 95: goto tr64;
	}
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto tr64;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr64;
		} else if ( (*p) >= 65 )
			goto tr64;
	} else
		goto tr64;
	goto tr34;
tr65:
#line 144 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_key(*this);
    }
	goto st37;
st37:
	if ( ++p == pe )
		goto _test_eof37;
case 37:
#line 2195 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 34 )
		goto tr66;
	if ( (*p) < 32 ) {
		if ( 9 <= (*p) && (*p) <= 13 )
			goto tr55;
	} else if ( (*p) > 43 ) {
		if ( (*p) > 61 ) {
			if ( 63 <= (*p) && (*p) <= 126 )
				goto tr55;
		} else if ( (*p) >= 45 )
			goto tr55;
	} else
		goto tr55;
	goto tr34;
tr66:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st38;
tr84:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st38;
st38:
	if ( ++p == pe )
		goto _test_eof38;
case 38:
#line 2238 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 34: goto tr58;
		case 44: goto tr68;
		case 62: goto tr69;
	}
	if ( (*p) > 13 ) {
		if ( 32 <= (*p) && (*p) <= 126 )
			goto tr67;
	} else if ( (*p) >= 9 )
		goto tr58;
	goto tr34;
tr83:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st39;
tr70:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st39;
tr67:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st39;
st39:
	if ( ++p == pe )
		goto _test_eof39;
case 39:
#line 2280 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 34: goto tr71;
		case 44: goto tr72;
		case 62: goto tr73;
	}
	if ( (*p) > 13 ) {
		if ( 32 <= (*p) && (*p) <= 126 )
			goto tr70;
	} else if ( (*p) >= 9 )
		goto tr58;
	goto tr34;
tr68:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st40;
tr72:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st40;
st40:
	if ( ++p == pe )
		goto _test_eof40;
case 40:
#line 2320 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 34: goto tr75;
		case 47: goto tr74;
		case 95: goto tr76;
	}
	if ( (*p) < 58 ) {
		if ( (*p) < 45 ) {
			if ( 32 <= (*p) && (*p) <= 44 )
				goto tr74;
		} else if ( (*p) > 46 ) {
			if ( 48 <= (*p) && (*p) <= 57 )
				goto tr77;
		} else
			goto tr76;
	} else if ( (*p) > 64 ) {
		if ( (*p) < 91 ) {
			if ( 65 <= (*p) && (*p) <= 90 )
				goto tr77;
		} else if ( (*p) > 96 ) {
			if ( (*p) > 122 ) {
				if ( 123 <= (*p) && (*p) <= 126 )
					goto tr74;
			} else if ( (*p) >= 97 )
				goto tr77;
		} else
			goto tr74;
	} else
		goto tr74;
	goto tr34;
tr74:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st41;
st41:
	if ( ++p == pe )
		goto _test_eof41;
case 41:
#line 2360 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 34 )
		goto tr75;
	if ( 32 <= (*p) && (*p) <= 126 )
		goto tr74;
	goto tr34;
tr75:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st42;
st42:
	if ( ++p == pe )
		goto _test_eof42;
case 42:
#line 2376 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 44: goto st34;
		case 62: goto st43;
	}
	goto tr34;
tr60:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st43;
st43:
	if ( ++p == pe )
		goto _test_eof43;
case 43:
#line 2392 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 10 )
		goto tr49;
	goto tr34;
tr76:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st44;
tr80:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st44;
st44:
	if ( ++p == pe )
		goto _test_eof44;
case 44:
#line 2416 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 34: goto tr75;
		case 47: goto tr74;
		case 95: goto tr80;
	}
	if ( (*p) < 58 ) {
		if ( (*p) < 45 ) {
			if ( 32 <= (*p) && (*p) <= 44 )
				goto tr74;
		} else if ( (*p) > 46 ) {
			if ( 48 <= (*p) && (*p) <= 57 )
				goto tr81;
		} else
			goto tr80;
	} else if ( (*p) > 64 ) {
		if ( (*p) < 91 ) {
			if ( 65 <= (*p) && (*p) <= 90 )
				goto tr81;
		} else if ( (*p) > 96 ) {
			if ( (*p) > 122 ) {
				if ( 123 <= (*p) && (*p) <= 126 )
					goto tr74;
			} else if ( (*p) >= 97 )
				goto tr81;
		} else
			goto tr74;
	} else
		goto tr74;
	goto tr34;
tr77:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st45;
tr81:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st45;
st45:
	if ( ++p == pe )
		goto _test_eof45;
case 45:
#line 2466 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 34: goto tr75;
		case 47: goto tr74;
		case 61: goto tr82;
		case 95: goto tr81;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 45 ) {
			if ( 32 <= (*p) && (*p) <= 44 )
				goto tr74;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr74;
		} else
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr74;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr74;
		} else
			goto tr81;
	} else
		goto tr81;
	goto tr34;
tr82:
#line 144 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_key(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st46;
st46:
	if ( ++p == pe )
		goto _test_eof46;
case 46:
#line 2508 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 34: goto tr84;
		case 44: goto tr74;
		case 62: goto tr74;
	}
	if ( (*p) > 13 ) {
		if ( 32 <= (*p) && (*p) <= 126 )
			goto tr83;
	} else if ( (*p) >= 9 )
		goto tr55;
	goto tr34;
tr69:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st47;
tr73:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st47;
st47:
	if ( ++p == pe )
		goto _test_eof47;
case 47:
#line 2548 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr49;
		case 34: goto tr75;
	}
	if ( 32 <= (*p) && (*p) <= 126 )
		goto tr74;
	goto tr34;
tr56:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st48;
tr85:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st48;
tr98:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st48;
tr124:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st48;
st48:
	if ( ++p == pe )
		goto _test_eof48;
case 48:
#line 2596 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 44: goto tr86;
		case 62: goto tr87;
	}
	if ( (*p) > 13 ) {
		if ( 32 <= (*p) && (*p) <= 126 )
			goto tr85;
	} else if ( (*p) >= 9 )
		goto tr58;
	goto tr34;
tr106:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st49;
tr86:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st49;
st49:
	if ( ++p == pe )
		goto _test_eof49;
case 49:
#line 2627 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 47: goto tr47;
		case 62: goto tr48;
		case 95: goto tr88;
	}
	if ( (*p) < 58 ) {
		if ( (*p) < 45 ) {
			if ( 32 <= (*p) && (*p) <= 44 )
				goto tr47;
		} else if ( (*p) > 46 ) {
			if ( 48 <= (*p) && (*p) <= 57 )
				goto tr89;
		} else
			goto tr88;
	} else if ( (*p) > 64 ) {
		if ( (*p) < 91 ) {
			if ( 65 <= (*p) && (*p) <= 90 )
				goto tr89;
		} else if ( (*p) > 96 ) {
			if ( (*p) > 122 ) {
				if ( 123 <= (*p) && (*p) <= 126 )
					goto tr47;
			} else if ( (*p) >= 97 )
				goto tr89;
		} else
			goto tr47;
	} else
		goto tr47;
	goto tr34;
tr88:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st50;
tr90:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st50;
st50:
	if ( ++p == pe )
		goto _test_eof50;
case 50:
#line 2677 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 47: goto tr47;
		case 62: goto tr48;
		case 95: goto tr90;
	}
	if ( (*p) < 58 ) {
		if ( (*p) < 45 ) {
			if ( 32 <= (*p) && (*p) <= 44 )
				goto tr47;
		} else if ( (*p) > 46 ) {
			if ( 48 <= (*p) && (*p) <= 57 )
				goto tr91;
		} else
			goto tr90;
	} else if ( (*p) > 64 ) {
		if ( (*p) < 91 ) {
			if ( 65 <= (*p) && (*p) <= 90 )
				goto tr91;
		} else if ( (*p) > 96 ) {
			if ( (*p) > 122 ) {
				if ( 123 <= (*p) && (*p) <= 126 )
					goto tr47;
			} else if ( (*p) >= 97 )
				goto tr91;
		} else
			goto tr47;
	} else
		goto tr47;
	goto tr34;
tr89:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st51;
tr91:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st51;
st51:
	if ( ++p == pe )
		goto _test_eof51;
case 51:
#line 2727 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 47: goto tr47;
		case 61: goto tr92;
		case 62: goto tr48;
		case 95: goto tr91;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 45 ) {
			if ( 32 <= (*p) && (*p) <= 44 )
				goto tr47;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr47;
		} else
			goto tr91;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr47;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr47;
		} else
			goto tr91;
	} else
		goto tr91;
	goto tr34;
tr92:
#line 144 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_key(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st52;
st52:
	if ( ++p == pe )
		goto _test_eof52;
case 52:
#line 2769 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 34: goto tr93;
		case 44: goto tr47;
		case 62: goto tr48;
	}
	if ( (*p) > 13 ) {
		if ( 32 <= (*p) && (*p) <= 126 )
			goto tr56;
	} else if ( (*p) >= 9 )
		goto tr55;
	goto tr34;
tr93:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st53;
tr122:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st53;
tr111:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st53;
st53:
	if ( ++p == pe )
		goto _test_eof53;
case 53:
#line 2823 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 34: goto tr85;
		case 44: goto tr95;
		case 62: goto tr96;
	}
	if ( (*p) > 13 ) {
		if ( 32 <= (*p) && (*p) <= 126 )
			goto tr94;
	} else if ( (*p) >= 9 )
		goto tr58;
	goto tr34;
tr110:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st54;
tr97:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st54;
tr94:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st54;
st54:
	if ( ++p == pe )
		goto _test_eof54;
case 54:
#line 2865 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 34: goto tr98;
		case 44: goto tr99;
		case 62: goto tr100;
	}
	if ( (*p) > 13 ) {
		if ( 32 <= (*p) && (*p) <= 126 )
			goto tr97;
	} else if ( (*p) >= 9 )
		goto tr58;
	goto tr34;
tr95:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st55;
tr99:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st55;
st55:
	if ( ++p == pe )
		goto _test_eof55;
case 55:
#line 2905 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 34: goto tr102;
		case 47: goto tr101;
		case 62: goto tr105;
		case 95: goto tr103;
	}
	if ( (*p) < 58 ) {
		if ( (*p) < 45 ) {
			if ( 32 <= (*p) && (*p) <= 44 )
				goto tr101;
		} else if ( (*p) > 46 ) {
			if ( 48 <= (*p) && (*p) <= 57 )
				goto tr104;
		} else
			goto tr103;
	} else if ( (*p) > 64 ) {
		if ( (*p) < 91 ) {
			if ( 65 <= (*p) && (*p) <= 90 )
				goto tr104;
		} else if ( (*p) > 96 ) {
			if ( (*p) > 122 ) {
				if ( 123 <= (*p) && (*p) <= 126 )
					goto tr101;
			} else if ( (*p) >= 97 )
				goto tr104;
		} else
			goto tr101;
	} else
		goto tr101;
	goto tr34;
tr101:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st56;
st56:
	if ( ++p == pe )
		goto _test_eof56;
case 56:
#line 2946 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 34: goto tr102;
		case 62: goto tr105;
	}
	if ( 32 <= (*p) && (*p) <= 126 )
		goto tr101;
	goto tr34;
tr102:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st57;
st57:
	if ( ++p == pe )
		goto _test_eof57;
case 57:
#line 2968 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 44: goto tr106;
		case 62: goto tr48;
	}
	if ( 32 <= (*p) && (*p) <= 126 )
		goto tr47;
	goto tr34;
tr105:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st58;
tr96:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st58;
tr100:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st58;
st58:
	if ( ++p == pe )
		goto _test_eof58;
case 58:
#line 3014 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr49;
		case 34: goto tr102;
		case 62: goto tr105;
	}
	if ( 32 <= (*p) && (*p) <= 126 )
		goto tr101;
	goto tr34;
tr103:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st59;
tr107:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st59;
st59:
	if ( ++p == pe )
		goto _test_eof59;
case 59:
#line 3043 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 34: goto tr102;
		case 47: goto tr101;
		case 62: goto tr105;
		case 95: goto tr107;
	}
	if ( (*p) < 58 ) {
		if ( (*p) < 45 ) {
			if ( 32 <= (*p) && (*p) <= 44 )
				goto tr101;
		} else if ( (*p) > 46 ) {
			if ( 48 <= (*p) && (*p) <= 57 )
				goto tr108;
		} else
			goto tr107;
	} else if ( (*p) > 64 ) {
		if ( (*p) < 91 ) {
			if ( 65 <= (*p) && (*p) <= 90 )
				goto tr108;
		} else if ( (*p) > 96 ) {
			if ( (*p) > 122 ) {
				if ( 123 <= (*p) && (*p) <= 126 )
					goto tr101;
			} else if ( (*p) >= 97 )
				goto tr108;
		} else
			goto tr101;
	} else
		goto tr101;
	goto tr34;
tr104:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st60;
tr108:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st60;
st60:
	if ( ++p == pe )
		goto _test_eof60;
case 60:
#line 3094 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 34: goto tr102;
		case 47: goto tr101;
		case 61: goto tr109;
		case 62: goto tr105;
		case 95: goto tr108;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 45 ) {
			if ( 32 <= (*p) && (*p) <= 44 )
				goto tr101;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr101;
		} else
			goto tr108;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr101;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr101;
		} else
			goto tr108;
	} else
		goto tr108;
	goto tr34;
tr109:
#line 144 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_key(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st61;
st61:
	if ( ++p == pe )
		goto _test_eof61;
case 61:
#line 3137 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 34: goto tr111;
		case 44: goto tr101;
		case 62: goto tr105;
	}
	if ( (*p) > 13 ) {
		if ( 32 <= (*p) && (*p) <= 126 )
			goto tr110;
	} else if ( (*p) >= 9 )
		goto tr55;
	goto tr34;
tr57:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st62;
st62:
	if ( ++p == pe )
		goto _test_eof62;
case 62:
#line 3163 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 34: goto tr85;
		case 44: goto tr113;
		case 62: goto tr96;
	}
	if ( (*p) > 13 ) {
		if ( 32 <= (*p) && (*p) <= 126 )
			goto tr112;
	} else if ( (*p) >= 9 )
		goto tr58;
	goto tr34;
tr114:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st63;
tr112:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st63;
st63:
	if ( ++p == pe )
		goto _test_eof63;
case 63:
#line 3195 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 34: goto tr98;
		case 44: goto tr115;
		case 62: goto tr100;
	}
	if ( (*p) > 13 ) {
		if ( 32 <= (*p) && (*p) <= 126 )
			goto tr114;
	} else if ( (*p) >= 9 )
		goto tr58;
	goto tr34;
tr125:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st64;
tr113:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st64;
tr115:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st64;
st64:
	if ( ++p == pe )
		goto _test_eof64;
case 64:
#line 3245 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 34: goto tr102;
		case 47: goto tr101;
		case 62: goto tr105;
		case 95: goto tr116;
	}
	if ( (*p) < 58 ) {
		if ( (*p) < 45 ) {
			if ( 32 <= (*p) && (*p) <= 44 )
				goto tr101;
		} else if ( (*p) > 46 ) {
			if ( 48 <= (*p) && (*p) <= 57 )
				goto tr117;
		} else
			goto tr116;
	} else if ( (*p) > 64 ) {
		if ( (*p) < 91 ) {
			if ( 65 <= (*p) && (*p) <= 90 )
				goto tr117;
		} else if ( (*p) > 96 ) {
			if ( (*p) > 122 ) {
				if ( 123 <= (*p) && (*p) <= 126 )
					goto tr101;
			} else if ( (*p) >= 97 )
				goto tr117;
		} else
			goto tr101;
	} else
		goto tr101;
	goto tr34;
tr118:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st65;
tr116:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st65;
st65:
	if ( ++p == pe )
		goto _test_eof65;
case 65:
#line 3296 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 34: goto tr102;
		case 47: goto tr101;
		case 62: goto tr105;
		case 95: goto tr118;
	}
	if ( (*p) < 58 ) {
		if ( (*p) < 45 ) {
			if ( 32 <= (*p) && (*p) <= 44 )
				goto tr101;
		} else if ( (*p) > 46 ) {
			if ( 48 <= (*p) && (*p) <= 57 )
				goto tr119;
		} else
			goto tr118;
	} else if ( (*p) > 64 ) {
		if ( (*p) < 91 ) {
			if ( 65 <= (*p) && (*p) <= 90 )
				goto tr119;
		} else if ( (*p) > 96 ) {
			if ( (*p) > 122 ) {
				if ( 123 <= (*p) && (*p) <= 126 )
					goto tr101;
			} else if ( (*p) >= 97 )
				goto tr119;
		} else
			goto tr101;
	} else
		goto tr101;
	goto tr34;
tr119:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st66;
tr117:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st66;
st66:
	if ( ++p == pe )
		goto _test_eof66;
case 66:
#line 3347 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 34: goto tr102;
		case 47: goto tr101;
		case 61: goto tr120;
		case 62: goto tr105;
		case 95: goto tr119;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 45 ) {
			if ( 32 <= (*p) && (*p) <= 44 )
				goto tr101;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr101;
		} else
			goto tr119;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr101;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr101;
		} else
			goto tr119;
	} else
		goto tr119;
	goto tr34;
tr120:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
#line 144 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_key(*this);
    }
	goto st67;
st67:
	if ( ++p == pe )
		goto _test_eof67;
case 67:
#line 3390 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 34: goto tr122;
		case 44: goto tr101;
		case 62: goto tr105;
	}
	if ( (*p) > 13 ) {
		if ( 32 <= (*p) && (*p) <= 126 )
			goto tr121;
	} else if ( (*p) >= 9 )
		goto tr55;
	goto tr34;
tr123:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st68;
tr121:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st68;
st68:
	if ( ++p == pe )
		goto _test_eof68;
case 68:
#line 3422 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 34: goto tr124;
		case 44: goto tr125;
		case 62: goto tr105;
	}
	if ( (*p) > 13 ) {
		if ( 32 <= (*p) && (*p) <= 126 )
			goto tr123;
	} else if ( (*p) >= 9 )
		goto tr58;
	goto tr34;
tr45:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st69;
st69:
	if ( ++p == pe )
		goto _test_eof69;
case 69:
#line 3448 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 47: goto tr46;
		case 61: goto tr126;
		case 95: goto tr51;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 45 ) {
			if ( 32 <= (*p) && (*p) <= 44 )
				goto tr46;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr46;
		} else
			goto tr51;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr46;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr46;
		} else
			goto tr51;
	} else
		goto tr51;
	goto tr34;
tr26:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st70;
st70:
	if ( ++p == pe )
		goto _test_eof70;
case 70:
#line 3489 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 76: goto tr128;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr127;
tr128:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st71;
st71:
	if ( ++p == pe )
		goto _test_eof71;
case 71:
#line 3527 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 84: goto tr129;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr127;
tr129:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st72;
st72:
	if ( ++p == pe )
		goto _test_eof72;
case 72:
#line 3565 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr130;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr127;
tr130:
#line 80 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_typeid(*this, "ALT");
    }
	goto st73;
st73:
	if ( ++p == pe )
		goto _test_eof73;
case 73:
#line 3602 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 60 )
		goto st74;
	goto tr127;
st74:
	if ( ++p == pe )
		goto _test_eof74;
case 74:
	if ( (*p) == 73 )
		goto st75;
	goto tr127;
st75:
	if ( ++p == pe )
		goto _test_eof75;
case 75:
	if ( (*p) == 68 )
		goto st76;
	goto tr127;
st76:
	if ( ++p == pe )
		goto _test_eof76;
case 76:
	if ( (*p) == 61 )
		goto st77;
	goto tr127;
st77:
	if ( ++p == pe )
		goto _test_eof77;
case 77:
	switch( (*p) ) {
		case 58: goto tr137;
		case 95: goto tr137;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr136;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr136;
	} else
		goto tr136;
	goto tr135;
tr139:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st78;
tr136:
#line 116 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_key(*this, "ID");
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st78;
st78:
	if ( ++p == pe )
		goto _test_eof78;
case 78:
#line 3668 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 44: goto tr138;
		case 95: goto tr139;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 58 )
			goto tr139;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr139;
	} else
		goto tr139;
	goto tr135;
tr138:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st79;
st79:
	if ( ++p == pe )
		goto _test_eof79;
case 79:
#line 3692 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 68 )
		goto st80;
	goto tr127;
st80:
	if ( ++p == pe )
		goto _test_eof80;
case 80:
	if ( (*p) == 101 )
		goto st81;
	goto tr127;
st81:
	if ( ++p == pe )
		goto _test_eof81;
case 81:
	if ( (*p) == 115 )
		goto st82;
	goto tr127;
st82:
	if ( ++p == pe )
		goto _test_eof82;
case 82:
	if ( (*p) == 99 )
		goto st83;
	goto tr127;
st83:
	if ( ++p == pe )
		goto _test_eof83;
case 83:
	if ( (*p) == 114 )
		goto st84;
	goto tr127;
st84:
	if ( ++p == pe )
		goto _test_eof84;
case 84:
	if ( (*p) == 105 )
		goto st85;
	goto tr127;
st85:
	if ( ++p == pe )
		goto _test_eof85;
case 85:
	if ( (*p) == 112 )
		goto st86;
	goto tr127;
st86:
	if ( ++p == pe )
		goto _test_eof86;
case 86:
	if ( (*p) == 116 )
		goto st87;
	goto tr127;
st87:
	if ( ++p == pe )
		goto _test_eof87;
case 87:
	if ( (*p) == 105 )
		goto st88;
	goto tr127;
st88:
	if ( ++p == pe )
		goto _test_eof88;
case 88:
	if ( (*p) == 111 )
		goto st89;
	goto tr127;
st89:
	if ( ++p == pe )
		goto _test_eof89;
case 89:
	if ( (*p) == 110 )
		goto st90;
	goto tr127;
st90:
	if ( ++p == pe )
		goto _test_eof90;
case 90:
	if ( (*p) == 61 )
		goto st91;
	goto tr127;
st91:
	if ( ++p == pe )
		goto _test_eof91;
case 91:
	if ( (*p) == 34 )
		goto tr152;
	goto tr127;
tr152:
#line 128 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_key(*this, "Description");
    }
	goto st92;
st92:
	if ( ++p == pe )
		goto _test_eof92;
case 92:
#line 3790 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) > 33 ) {
		if ( 35 <= (*p) && (*p) <= 126 )
			goto tr153;
	} else if ( (*p) >= 32 )
		goto tr153;
	goto tr127;
tr153:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st93;
tr155:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st93;
st93:
	if ( ++p == pe )
		goto _test_eof93;
case 93:
#line 3817 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 34 )
		goto tr156;
	if ( 32 <= (*p) && (*p) <= 126 )
		goto tr155;
	goto tr154;
tr156:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st94;
st94:
	if ( ++p == pe )
		goto _test_eof94;
case 94:
#line 3833 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 44: goto st95;
		case 62: goto st99;
	}
	goto tr154;
st95:
	if ( ++p == pe )
		goto _test_eof95;
case 95:
	if ( (*p) == 95 )
		goto tr160;
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto tr160;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr161;
		} else if ( (*p) >= 65 )
			goto tr161;
	} else
		goto tr161;
	goto tr159;
tr160:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st96;
st96:
	if ( ++p == pe )
		goto _test_eof96;
case 96:
#line 3867 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 95 )
		goto st96;
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto st96;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr163;
		} else if ( (*p) >= 65 )
			goto tr163;
	} else
		goto tr163;
	goto tr159;
tr161:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st97;
tr163:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st97;
st97:
	if ( ++p == pe )
		goto _test_eof97;
case 97:
#line 3902 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 61: goto tr164;
		case 95: goto tr163;
	}
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto tr163;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr163;
		} else if ( (*p) >= 65 )
			goto tr163;
	} else
		goto tr163;
	goto tr159;
tr164:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st98;
st98:
	if ( ++p == pe )
		goto _test_eof98;
case 98:
#line 3929 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 34 )
		goto st92;
	goto tr127;
st99:
	if ( ++p == pe )
		goto _test_eof99;
case 99:
	if ( (*p) == 10 )
		goto tr49;
	goto tr127;
tr137:
#line 116 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_key(*this, "ID");
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st100;
st100:
	if ( ++p == pe )
		goto _test_eof100;
case 100:
#line 3954 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 58: goto st100;
		case 95: goto st100;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr139;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr139;
	} else
		goto tr139;
	goto tr135;
tr27:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st101;
st101:
	if ( ++p == pe )
		goto _test_eof101;
case 101:
#line 3982 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 73: goto tr168;
		case 79: goto tr169;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr167;
tr168:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st102;
st102:
	if ( ++p == pe )
		goto _test_eof102;
case 102:
#line 4021 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 76: goto tr171;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr170;
tr171:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st103;
st103:
	if ( ++p == pe )
		goto _test_eof103;
case 103:
#line 4059 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 84: goto tr172;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr170;
tr172:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st104;
st104:
	if ( ++p == pe )
		goto _test_eof104;
case 104:
#line 4097 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 69: goto tr173;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr170;
tr173:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st105;
st105:
	if ( ++p == pe )
		goto _test_eof105;
case 105:
#line 4135 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 82: goto tr174;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr170;
tr174:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st106;
st106:
	if ( ++p == pe )
		goto _test_eof106;
case 106:
#line 4173 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr175;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr170;
tr175:
#line 92 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_typeid(*this, "FILTER");
    }
	goto st107;
st107:
	if ( ++p == pe )
		goto _test_eof107;
case 107:
#line 4210 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 60 )
		goto st108;
	goto tr170;
st108:
	if ( ++p == pe )
		goto _test_eof108;
case 108:
	if ( (*p) == 73 )
		goto st109;
	goto tr170;
st109:
	if ( ++p == pe )
		goto _test_eof109;
case 109:
	if ( (*p) == 68 )
		goto st110;
	goto tr170;
st110:
	if ( ++p == pe )
		goto _test_eof110;
case 110:
	if ( (*p) == 61 )
		goto st111;
	goto tr170;
st111:
	if ( ++p == pe )
		goto _test_eof111;
case 111:
	if ( (*p) == 95 )
		goto tr181;
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto tr181;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr182;
		} else if ( (*p) >= 65 )
			goto tr182;
	} else
		goto tr182;
	goto tr180;
tr181:
#line 116 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_key(*this, "ID");
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st112;
st112:
	if ( ++p == pe )
		goto _test_eof112;
case 112:
#line 4267 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 95 )
		goto st112;
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto st112;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr184;
		} else if ( (*p) >= 65 )
			goto tr184;
	} else
		goto tr184;
	goto tr180;
tr184:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st113;
tr182:
#line 116 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_key(*this, "ID");
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st113;
st113:
	if ( ++p == pe )
		goto _test_eof113;
case 113:
#line 4306 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 44: goto tr185;
		case 95: goto tr184;
	}
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto tr184;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr184;
		} else if ( (*p) >= 65 )
			goto tr184;
	} else
		goto tr184;
	goto tr180;
tr185:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st114;
st114:
	if ( ++p == pe )
		goto _test_eof114;
case 114:
#line 4333 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 68 )
		goto st115;
	goto tr170;
st115:
	if ( ++p == pe )
		goto _test_eof115;
case 115:
	if ( (*p) == 101 )
		goto st116;
	goto tr170;
st116:
	if ( ++p == pe )
		goto _test_eof116;
case 116:
	if ( (*p) == 115 )
		goto st117;
	goto tr170;
st117:
	if ( ++p == pe )
		goto _test_eof117;
case 117:
	if ( (*p) == 99 )
		goto st118;
	goto tr170;
st118:
	if ( ++p == pe )
		goto _test_eof118;
case 118:
	if ( (*p) == 114 )
		goto st119;
	goto tr170;
st119:
	if ( ++p == pe )
		goto _test_eof119;
case 119:
	if ( (*p) == 105 )
		goto st120;
	goto tr170;
st120:
	if ( ++p == pe )
		goto _test_eof120;
case 120:
	if ( (*p) == 112 )
		goto st121;
	goto tr170;
st121:
	if ( ++p == pe )
		goto _test_eof121;
case 121:
	if ( (*p) == 116 )
		goto st122;
	goto tr170;
st122:
	if ( ++p == pe )
		goto _test_eof122;
case 122:
	if ( (*p) == 105 )
		goto st123;
	goto tr170;
st123:
	if ( ++p == pe )
		goto _test_eof123;
case 123:
	if ( (*p) == 111 )
		goto st124;
	goto tr170;
st124:
	if ( ++p == pe )
		goto _test_eof124;
case 124:
	if ( (*p) == 110 )
		goto st125;
	goto tr170;
st125:
	if ( ++p == pe )
		goto _test_eof125;
case 125:
	if ( (*p) == 61 )
		goto st126;
	goto tr170;
st126:
	if ( ++p == pe )
		goto _test_eof126;
case 126:
	if ( (*p) == 34 )
		goto tr198;
	goto tr170;
tr198:
#line 128 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_key(*this, "Description");
    }
	goto st127;
st127:
	if ( ++p == pe )
		goto _test_eof127;
case 127:
#line 4431 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) > 33 ) {
		if ( 35 <= (*p) && (*p) <= 126 )
			goto tr199;
	} else if ( (*p) >= 32 )
		goto tr199;
	goto tr170;
tr199:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st128;
tr201:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st128;
st128:
	if ( ++p == pe )
		goto _test_eof128;
case 128:
#line 4458 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 34 )
		goto tr202;
	if ( 32 <= (*p) && (*p) <= 126 )
		goto tr201;
	goto tr200;
tr202:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st129;
st129:
	if ( ++p == pe )
		goto _test_eof129;
case 129:
#line 4474 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 44: goto st130;
		case 62: goto st134;
	}
	goto tr200;
st130:
	if ( ++p == pe )
		goto _test_eof130;
case 130:
	if ( (*p) == 95 )
		goto tr205;
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto tr205;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr206;
		} else if ( (*p) >= 65 )
			goto tr206;
	} else
		goto tr206;
	goto tr180;
tr205:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st131;
st131:
	if ( ++p == pe )
		goto _test_eof131;
case 131:
#line 4508 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 95 )
		goto st131;
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto st131;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr208;
		} else if ( (*p) >= 65 )
			goto tr208;
	} else
		goto tr208;
	goto tr180;
tr206:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st132;
tr208:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st132;
st132:
	if ( ++p == pe )
		goto _test_eof132;
case 132:
#line 4543 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 61: goto tr209;
		case 95: goto tr208;
	}
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto tr208;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr208;
		} else if ( (*p) >= 65 )
			goto tr208;
	} else
		goto tr208;
	goto tr180;
tr209:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st133;
st133:
	if ( ++p == pe )
		goto _test_eof133;
case 133:
#line 4570 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 34 )
		goto st127;
	goto tr170;
st134:
	if ( ++p == pe )
		goto _test_eof134;
case 134:
	if ( (*p) == 10 )
		goto tr49;
	goto tr170;
tr169:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st135;
st135:
	if ( ++p == pe )
		goto _test_eof135;
case 135:
#line 4591 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 82: goto tr212;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr211;
tr212:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st136;
st136:
	if ( ++p == pe )
		goto _test_eof136;
case 136:
#line 4629 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 77: goto tr213;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr211;
tr213:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st137;
st137:
	if ( ++p == pe )
		goto _test_eof137;
case 137:
#line 4667 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 65: goto tr214;
		case 95: goto tr37;
	}
	if ( (*p) < 66 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr211;
tr214:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st138;
st138:
	if ( ++p == pe )
		goto _test_eof138;
case 138:
#line 4705 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 84: goto tr215;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr211;
tr215:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st139;
st139:
	if ( ++p == pe )
		goto _test_eof139;
case 139:
#line 4743 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr216;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr211;
tr216:
#line 96 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_typeid(*this, "FORMAT");
    }
	goto st140;
st140:
	if ( ++p == pe )
		goto _test_eof140;
case 140:
#line 4780 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 60 )
		goto st141;
	goto tr211;
st141:
	if ( ++p == pe )
		goto _test_eof141;
case 141:
	if ( (*p) == 73 )
		goto st142;
	goto tr211;
st142:
	if ( ++p == pe )
		goto _test_eof142;
case 142:
	if ( (*p) == 68 )
		goto st143;
	goto tr211;
st143:
	if ( ++p == pe )
		goto _test_eof143;
case 143:
	if ( (*p) == 61 )
		goto st144;
	goto tr211;
st144:
	if ( ++p == pe )
		goto _test_eof144;
case 144:
	if ( (*p) == 95 )
		goto tr222;
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto tr222;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr223;
		} else if ( (*p) >= 65 )
			goto tr223;
	} else
		goto tr223;
	goto tr221;
tr222:
#line 116 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_key(*this, "ID");
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st145;
st145:
	if ( ++p == pe )
		goto _test_eof145;
case 145:
#line 4837 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 95 )
		goto st145;
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto st145;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr225;
		} else if ( (*p) >= 65 )
			goto tr225;
	} else
		goto tr225;
	goto tr221;
tr225:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st146;
tr223:
#line 116 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_key(*this, "ID");
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st146;
st146:
	if ( ++p == pe )
		goto _test_eof146;
case 146:
#line 4876 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 44: goto tr226;
		case 95: goto tr225;
	}
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto tr225;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr225;
		} else if ( (*p) >= 65 )
			goto tr225;
	} else
		goto tr225;
	goto tr221;
tr226:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st147;
st147:
	if ( ++p == pe )
		goto _test_eof147;
case 147:
#line 4903 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 78 )
		goto st148;
	goto tr211;
st148:
	if ( ++p == pe )
		goto _test_eof148;
case 148:
	if ( (*p) == 117 )
		goto st149;
	goto tr211;
st149:
	if ( ++p == pe )
		goto _test_eof149;
case 149:
	if ( (*p) == 109 )
		goto st150;
	goto tr211;
st150:
	if ( ++p == pe )
		goto _test_eof150;
case 150:
	if ( (*p) == 98 )
		goto st151;
	goto tr211;
st151:
	if ( ++p == pe )
		goto _test_eof151;
case 151:
	if ( (*p) == 101 )
		goto st152;
	goto tr211;
st152:
	if ( ++p == pe )
		goto _test_eof152;
case 152:
	if ( (*p) == 114 )
		goto st153;
	goto tr211;
st153:
	if ( ++p == pe )
		goto _test_eof153;
case 153:
	if ( (*p) == 61 )
		goto st154;
	goto tr211;
st154:
	if ( ++p == pe )
		goto _test_eof154;
case 154:
	switch( (*p) ) {
		case 46: goto tr235;
		case 65: goto tr235;
		case 71: goto tr235;
		case 82: goto tr235;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr236;
	goto tr234;
tr235:
#line 120 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_key(*this, "Number");
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st155;
st155:
	if ( ++p == pe )
		goto _test_eof155;
case 155:
#line 4980 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 44 )
		goto tr237;
	goto tr234;
tr237:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st156;
st156:
	if ( ++p == pe )
		goto _test_eof156;
case 156:
#line 4994 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 84 )
		goto st157;
	goto tr211;
st157:
	if ( ++p == pe )
		goto _test_eof157;
case 157:
	if ( (*p) == 121 )
		goto st158;
	goto tr211;
st158:
	if ( ++p == pe )
		goto _test_eof158;
case 158:
	if ( (*p) == 112 )
		goto st159;
	goto tr211;
st159:
	if ( ++p == pe )
		goto _test_eof159;
case 159:
	if ( (*p) == 101 )
		goto st160;
	goto tr211;
st160:
	if ( ++p == pe )
		goto _test_eof160;
case 160:
	if ( (*p) == 61 )
		goto st161;
	goto tr211;
st161:
	if ( ++p == pe )
		goto _test_eof161;
case 161:
	if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr244;
	} else if ( (*p) >= 65 )
		goto tr244;
	goto tr243;
tr246:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st162;
tr244:
#line 124 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_key(*this, "Type");
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st162;
st162:
	if ( ++p == pe )
		goto _test_eof162;
case 162:
#line 5060 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 44 )
		goto tr245;
	if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr246;
	} else if ( (*p) >= 65 )
		goto tr246;
	goto tr243;
tr245:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st163;
st163:
	if ( ++p == pe )
		goto _test_eof163;
case 163:
#line 5079 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 68 )
		goto st164;
	goto tr211;
st164:
	if ( ++p == pe )
		goto _test_eof164;
case 164:
	if ( (*p) == 101 )
		goto st165;
	goto tr211;
st165:
	if ( ++p == pe )
		goto _test_eof165;
case 165:
	if ( (*p) == 115 )
		goto st166;
	goto tr211;
st166:
	if ( ++p == pe )
		goto _test_eof166;
case 166:
	if ( (*p) == 99 )
		goto st167;
	goto tr211;
st167:
	if ( ++p == pe )
		goto _test_eof167;
case 167:
	if ( (*p) == 114 )
		goto st168;
	goto tr211;
st168:
	if ( ++p == pe )
		goto _test_eof168;
case 168:
	if ( (*p) == 105 )
		goto st169;
	goto tr211;
st169:
	if ( ++p == pe )
		goto _test_eof169;
case 169:
	if ( (*p) == 112 )
		goto st170;
	goto tr211;
st170:
	if ( ++p == pe )
		goto _test_eof170;
case 170:
	if ( (*p) == 116 )
		goto st171;
	goto tr211;
st171:
	if ( ++p == pe )
		goto _test_eof171;
case 171:
	if ( (*p) == 105 )
		goto st172;
	goto tr211;
st172:
	if ( ++p == pe )
		goto _test_eof172;
case 172:
	if ( (*p) == 111 )
		goto st173;
	goto tr211;
st173:
	if ( ++p == pe )
		goto _test_eof173;
case 173:
	if ( (*p) == 110 )
		goto st174;
	goto tr211;
st174:
	if ( ++p == pe )
		goto _test_eof174;
case 174:
	if ( (*p) == 61 )
		goto st175;
	goto tr211;
st175:
	if ( ++p == pe )
		goto _test_eof175;
case 175:
	if ( (*p) == 34 )
		goto tr259;
	goto tr211;
tr259:
#line 128 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_key(*this, "Description");
    }
	goto st176;
st176:
	if ( ++p == pe )
		goto _test_eof176;
case 176:
#line 5177 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) > 33 ) {
		if ( 35 <= (*p) && (*p) <= 126 )
			goto tr260;
	} else if ( (*p) >= 32 )
		goto tr260;
	goto tr211;
tr260:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st177;
tr262:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st177;
st177:
	if ( ++p == pe )
		goto _test_eof177;
case 177:
#line 5204 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 34 )
		goto tr263;
	if ( 32 <= (*p) && (*p) <= 126 )
		goto tr262;
	goto tr261;
tr263:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st178;
st178:
	if ( ++p == pe )
		goto _test_eof178;
case 178:
#line 5220 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 44: goto st179;
		case 62: goto st183;
	}
	goto tr261;
st179:
	if ( ++p == pe )
		goto _test_eof179;
case 179:
	if ( (*p) == 95 )
		goto tr266;
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto tr266;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr267;
		} else if ( (*p) >= 65 )
			goto tr267;
	} else
		goto tr267;
	goto tr221;
tr266:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st180;
st180:
	if ( ++p == pe )
		goto _test_eof180;
case 180:
#line 5254 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 95 )
		goto st180;
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto st180;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr269;
		} else if ( (*p) >= 65 )
			goto tr269;
	} else
		goto tr269;
	goto tr221;
tr267:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st181;
tr269:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st181;
st181:
	if ( ++p == pe )
		goto _test_eof181;
case 181:
#line 5289 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 61: goto tr270;
		case 95: goto tr269;
	}
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto tr269;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr269;
		} else if ( (*p) >= 65 )
			goto tr269;
	} else
		goto tr269;
	goto tr221;
tr270:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st182;
st182:
	if ( ++p == pe )
		goto _test_eof182;
case 182:
#line 5316 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 34 )
		goto st176;
	goto tr211;
st183:
	if ( ++p == pe )
		goto _test_eof183;
case 183:
	if ( (*p) == 10 )
		goto tr49;
	goto tr211;
tr272:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st184;
tr236:
#line 120 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_key(*this, "Number");
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st184;
st184:
	if ( ++p == pe )
		goto _test_eof184;
case 184:
#line 5351 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 44 )
		goto tr237;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr272;
	goto tr234;
tr28:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st185;
st185:
	if ( ++p == pe )
		goto _test_eof185;
case 185:
#line 5371 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 78: goto tr274;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr273;
tr274:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st186;
st186:
	if ( ++p == pe )
		goto _test_eof186;
case 186:
#line 5409 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 70: goto tr275;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr273;
tr275:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st187;
st187:
	if ( ++p == pe )
		goto _test_eof187;
case 187:
#line 5447 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 79: goto tr276;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr273;
tr276:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st188;
st188:
	if ( ++p == pe )
		goto _test_eof188;
case 188:
#line 5485 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr277;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr273;
tr277:
#line 100 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_typeid(*this, "INFO");
    }
	goto st189;
st189:
	if ( ++p == pe )
		goto _test_eof189;
case 189:
#line 5522 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 60 )
		goto st190;
	goto tr273;
st190:
	if ( ++p == pe )
		goto _test_eof190;
case 190:
	if ( (*p) == 73 )
		goto st191;
	goto tr273;
st191:
	if ( ++p == pe )
		goto _test_eof191;
case 191:
	if ( (*p) == 68 )
		goto st192;
	goto tr273;
st192:
	if ( ++p == pe )
		goto _test_eof192;
case 192:
	if ( (*p) == 61 )
		goto st193;
	goto tr273;
st193:
	if ( ++p == pe )
		goto _test_eof193;
case 193:
	if ( (*p) == 95 )
		goto tr283;
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto tr283;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr284;
		} else if ( (*p) >= 65 )
			goto tr284;
	} else
		goto tr284;
	goto tr282;
tr283:
#line 116 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_key(*this, "ID");
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st194;
st194:
	if ( ++p == pe )
		goto _test_eof194;
case 194:
#line 5579 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 95 )
		goto st194;
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto st194;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr286;
		} else if ( (*p) >= 65 )
			goto tr286;
	} else
		goto tr286;
	goto tr282;
tr286:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st195;
tr284:
#line 116 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_key(*this, "ID");
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st195;
st195:
	if ( ++p == pe )
		goto _test_eof195;
case 195:
#line 5618 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 44: goto tr287;
		case 95: goto tr286;
	}
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto tr286;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr286;
		} else if ( (*p) >= 65 )
			goto tr286;
	} else
		goto tr286;
	goto tr282;
tr287:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st196;
st196:
	if ( ++p == pe )
		goto _test_eof196;
case 196:
#line 5645 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 78 )
		goto st197;
	goto tr273;
st197:
	if ( ++p == pe )
		goto _test_eof197;
case 197:
	if ( (*p) == 117 )
		goto st198;
	goto tr273;
st198:
	if ( ++p == pe )
		goto _test_eof198;
case 198:
	if ( (*p) == 109 )
		goto st199;
	goto tr273;
st199:
	if ( ++p == pe )
		goto _test_eof199;
case 199:
	if ( (*p) == 98 )
		goto st200;
	goto tr273;
st200:
	if ( ++p == pe )
		goto _test_eof200;
case 200:
	if ( (*p) == 101 )
		goto st201;
	goto tr273;
st201:
	if ( ++p == pe )
		goto _test_eof201;
case 201:
	if ( (*p) == 114 )
		goto st202;
	goto tr273;
st202:
	if ( ++p == pe )
		goto _test_eof202;
case 202:
	if ( (*p) == 61 )
		goto st203;
	goto tr273;
st203:
	if ( ++p == pe )
		goto _test_eof203;
case 203:
	switch( (*p) ) {
		case 46: goto tr296;
		case 65: goto tr296;
		case 71: goto tr296;
		case 82: goto tr296;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr297;
	goto tr295;
tr296:
#line 120 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_key(*this, "Number");
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st204;
st204:
	if ( ++p == pe )
		goto _test_eof204;
case 204:
#line 5722 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 44 )
		goto tr298;
	goto tr295;
tr298:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st205;
st205:
	if ( ++p == pe )
		goto _test_eof205;
case 205:
#line 5736 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 84 )
		goto st206;
	goto tr273;
st206:
	if ( ++p == pe )
		goto _test_eof206;
case 206:
	if ( (*p) == 121 )
		goto st207;
	goto tr273;
st207:
	if ( ++p == pe )
		goto _test_eof207;
case 207:
	if ( (*p) == 112 )
		goto st208;
	goto tr273;
st208:
	if ( ++p == pe )
		goto _test_eof208;
case 208:
	if ( (*p) == 101 )
		goto st209;
	goto tr273;
st209:
	if ( ++p == pe )
		goto _test_eof209;
case 209:
	if ( (*p) == 61 )
		goto st210;
	goto tr273;
st210:
	if ( ++p == pe )
		goto _test_eof210;
case 210:
	if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr305;
	} else if ( (*p) >= 65 )
		goto tr305;
	goto tr304;
tr307:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st211;
tr305:
#line 124 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_key(*this, "Type");
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st211;
st211:
	if ( ++p == pe )
		goto _test_eof211;
case 211:
#line 5802 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 44 )
		goto tr306;
	if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr307;
	} else if ( (*p) >= 65 )
		goto tr307;
	goto tr304;
tr306:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st212;
st212:
	if ( ++p == pe )
		goto _test_eof212;
case 212:
#line 5821 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 68 )
		goto st213;
	goto tr273;
st213:
	if ( ++p == pe )
		goto _test_eof213;
case 213:
	if ( (*p) == 101 )
		goto st214;
	goto tr273;
st214:
	if ( ++p == pe )
		goto _test_eof214;
case 214:
	if ( (*p) == 115 )
		goto st215;
	goto tr273;
st215:
	if ( ++p == pe )
		goto _test_eof215;
case 215:
	if ( (*p) == 99 )
		goto st216;
	goto tr273;
st216:
	if ( ++p == pe )
		goto _test_eof216;
case 216:
	if ( (*p) == 114 )
		goto st217;
	goto tr273;
st217:
	if ( ++p == pe )
		goto _test_eof217;
case 217:
	if ( (*p) == 105 )
		goto st218;
	goto tr273;
st218:
	if ( ++p == pe )
		goto _test_eof218;
case 218:
	if ( (*p) == 112 )
		goto st219;
	goto tr273;
st219:
	if ( ++p == pe )
		goto _test_eof219;
case 219:
	if ( (*p) == 116 )
		goto st220;
	goto tr273;
st220:
	if ( ++p == pe )
		goto _test_eof220;
case 220:
	if ( (*p) == 105 )
		goto st221;
	goto tr273;
st221:
	if ( ++p == pe )
		goto _test_eof221;
case 221:
	if ( (*p) == 111 )
		goto st222;
	goto tr273;
st222:
	if ( ++p == pe )
		goto _test_eof222;
case 222:
	if ( (*p) == 110 )
		goto st223;
	goto tr273;
st223:
	if ( ++p == pe )
		goto _test_eof223;
case 223:
	if ( (*p) == 61 )
		goto st224;
	goto tr273;
st224:
	if ( ++p == pe )
		goto _test_eof224;
case 224:
	if ( (*p) == 34 )
		goto tr320;
	goto tr273;
tr320:
#line 128 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_key(*this, "Description");
    }
	goto st225;
st225:
	if ( ++p == pe )
		goto _test_eof225;
case 225:
#line 5919 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) > 33 ) {
		if ( 35 <= (*p) && (*p) <= 126 )
			goto tr321;
	} else if ( (*p) >= 32 )
		goto tr321;
	goto tr273;
tr321:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st226;
tr323:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st226;
st226:
	if ( ++p == pe )
		goto _test_eof226;
case 226:
#line 5946 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 34 )
		goto tr324;
	if ( 32 <= (*p) && (*p) <= 126 )
		goto tr323;
	goto tr322;
tr324:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st227;
st227:
	if ( ++p == pe )
		goto _test_eof227;
case 227:
#line 5962 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 44: goto st228;
		case 62: goto st232;
	}
	goto tr322;
st228:
	if ( ++p == pe )
		goto _test_eof228;
case 228:
	if ( (*p) == 95 )
		goto tr327;
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto tr327;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr328;
		} else if ( (*p) >= 65 )
			goto tr328;
	} else
		goto tr328;
	goto tr282;
tr327:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st229;
st229:
	if ( ++p == pe )
		goto _test_eof229;
case 229:
#line 5996 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 95 )
		goto st229;
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto st229;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr330;
		} else if ( (*p) >= 65 )
			goto tr330;
	} else
		goto tr330;
	goto tr282;
tr328:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st230;
tr330:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st230;
st230:
	if ( ++p == pe )
		goto _test_eof230;
case 230:
#line 6031 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 61: goto tr331;
		case 95: goto tr330;
	}
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto tr330;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr330;
		} else if ( (*p) >= 65 )
			goto tr330;
	} else
		goto tr330;
	goto tr282;
tr331:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st231;
st231:
	if ( ++p == pe )
		goto _test_eof231;
case 231:
#line 6058 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 34 )
		goto st225;
	goto tr273;
st232:
	if ( ++p == pe )
		goto _test_eof232;
case 232:
	if ( (*p) == 10 )
		goto tr49;
	goto tr273;
tr333:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st233;
tr297:
#line 120 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_key(*this, "Number");
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st233;
st233:
	if ( ++p == pe )
		goto _test_eof233;
case 233:
#line 6093 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 44 )
		goto tr298;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr333;
	goto tr295;
tr29:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st234;
st234:
	if ( ++p == pe )
		goto _test_eof234;
case 234:
#line 6113 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 69: goto tr335;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr334;
tr335:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st235;
st235:
	if ( ++p == pe )
		goto _test_eof235;
case 235:
#line 6151 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 68: goto tr336;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr334;
tr336:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st236;
st236:
	if ( ++p == pe )
		goto _test_eof236;
case 236:
#line 6189 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 73: goto tr337;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr334;
tr337:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st237;
st237:
	if ( ++p == pe )
		goto _test_eof237;
case 237:
#line 6227 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 71: goto tr338;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr334;
tr338:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st238;
st238:
	if ( ++p == pe )
		goto _test_eof238;
case 238:
#line 6265 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 82: goto tr339;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr334;
tr339:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st239;
st239:
	if ( ++p == pe )
		goto _test_eof239;
case 239:
#line 6303 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 69: goto tr340;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr334;
tr340:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st240;
st240:
	if ( ++p == pe )
		goto _test_eof240;
case 240:
#line 6341 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 69: goto tr341;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr334;
tr341:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st241;
st241:
	if ( ++p == pe )
		goto _test_eof241;
case 241:
#line 6379 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr342;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr334;
tr342:
#line 104 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_typeid(*this, "PEDIGREE");
    }
	goto st242;
st242:
	if ( ++p == pe )
		goto _test_eof242;
case 242:
#line 6416 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 60 )
		goto st243;
	goto tr334;
tr354:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st243;
st243:
	if ( ++p == pe )
		goto _test_eof243;
case 243:
#line 6430 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 95 )
		goto tr345;
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto tr345;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr346;
		} else if ( (*p) >= 65 )
			goto tr346;
	} else
		goto tr346;
	goto tr344;
tr345:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st244;
st244:
	if ( ++p == pe )
		goto _test_eof244;
case 244:
#line 6455 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 95 )
		goto st244;
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto st244;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr348;
		} else if ( (*p) >= 65 )
			goto tr348;
	} else
		goto tr348;
	goto tr344;
tr346:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st245;
tr348:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st245;
st245:
	if ( ++p == pe )
		goto _test_eof245;
case 245:
#line 6490 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 61: goto tr349;
		case 95: goto tr348;
	}
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto tr348;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr348;
		} else if ( (*p) >= 65 )
			goto tr348;
	} else
		goto tr348;
	goto tr344;
tr349:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st246;
st246:
	if ( ++p == pe )
		goto _test_eof246;
case 246:
#line 6517 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 95 )
		goto tr350;
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto tr350;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr351;
		} else if ( (*p) >= 65 )
			goto tr351;
	} else
		goto tr351;
	goto tr344;
tr350:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st247;
st247:
	if ( ++p == pe )
		goto _test_eof247;
case 247:
#line 6542 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 95 )
		goto st247;
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto st247;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr353;
		} else if ( (*p) >= 65 )
			goto tr353;
	} else
		goto tr353;
	goto tr344;
tr351:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st248;
tr353:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st248;
st248:
	if ( ++p == pe )
		goto _test_eof248;
case 248:
#line 6577 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 44: goto tr354;
		case 62: goto tr355;
		case 95: goto tr353;
	}
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto tr353;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr353;
		} else if ( (*p) >= 65 )
			goto tr353;
	} else
		goto tr353;
	goto tr344;
tr355:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st249;
st249:
	if ( ++p == pe )
		goto _test_eof249;
case 249:
#line 6605 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 10 )
		goto tr49;
	goto tr334;
tr30:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st250;
st250:
	if ( ++p == pe )
		goto _test_eof250;
case 250:
#line 6623 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 65: goto tr357;
		case 95: goto tr37;
	}
	if ( (*p) < 66 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr356;
tr357:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st251;
st251:
	if ( ++p == pe )
		goto _test_eof251;
case 251:
#line 6661 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 77: goto tr358;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr356;
tr358:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st252;
st252:
	if ( ++p == pe )
		goto _test_eof252;
case 252:
#line 6699 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 80: goto tr359;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr356;
tr359:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st253;
st253:
	if ( ++p == pe )
		goto _test_eof253;
case 253:
#line 6737 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 76: goto tr360;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr356;
tr360:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st254;
st254:
	if ( ++p == pe )
		goto _test_eof254;
case 254:
#line 6775 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 69: goto tr361;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr356;
tr361:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st255;
st255:
	if ( ++p == pe )
		goto _test_eof255;
case 255:
#line 6813 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr362;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr356;
tr362:
#line 112 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_typeid(*this, "SAMPLE");
    }
	goto st256;
st256:
	if ( ++p == pe )
		goto _test_eof256;
case 256:
#line 6850 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 60 )
		goto st257;
	goto tr356;
st257:
	if ( ++p == pe )
		goto _test_eof257;
case 257:
	if ( (*p) == 73 )
		goto st258;
	goto tr356;
st258:
	if ( ++p == pe )
		goto _test_eof258;
case 258:
	if ( (*p) == 68 )
		goto st259;
	goto tr356;
st259:
	if ( ++p == pe )
		goto _test_eof259;
case 259:
	if ( (*p) == 61 )
		goto st260;
	goto tr356;
st260:
	if ( ++p == pe )
		goto _test_eof260;
case 260:
	if ( (*p) == 95 )
		goto tr368;
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto tr368;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr369;
		} else if ( (*p) >= 65 )
			goto tr369;
	} else
		goto tr369;
	goto tr367;
tr368:
#line 116 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_key(*this, "ID");
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st261;
st261:
	if ( ++p == pe )
		goto _test_eof261;
case 261:
#line 6907 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 95 )
		goto st261;
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto st261;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr371;
		} else if ( (*p) >= 65 )
			goto tr371;
	} else
		goto tr371;
	goto tr367;
tr371:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st262;
tr369:
#line 116 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_key(*this, "ID");
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st262;
st262:
	if ( ++p == pe )
		goto _test_eof262;
case 262:
#line 6946 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 44: goto tr373;
		case 95: goto tr371;
	}
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto tr371;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr371;
		} else if ( (*p) >= 65 )
			goto tr371;
	} else
		goto tr371;
	goto tr372;
tr373:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st263;
st263:
	if ( ++p == pe )
		goto _test_eof263;
case 263:
#line 6973 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 71 )
		goto st264;
	goto tr374;
st264:
	if ( ++p == pe )
		goto _test_eof264;
case 264:
	if ( (*p) == 101 )
		goto st265;
	goto tr374;
st265:
	if ( ++p == pe )
		goto _test_eof265;
case 265:
	if ( (*p) == 110 )
		goto st266;
	goto tr374;
st266:
	if ( ++p == pe )
		goto _test_eof266;
case 266:
	if ( (*p) == 111 )
		goto st267;
	goto tr374;
st267:
	if ( ++p == pe )
		goto _test_eof267;
case 267:
	if ( (*p) == 109 )
		goto st268;
	goto tr374;
st268:
	if ( ++p == pe )
		goto _test_eof268;
case 268:
	if ( (*p) == 101 )
		goto st269;
	goto tr374;
st269:
	if ( ++p == pe )
		goto _test_eof269;
case 269:
	if ( (*p) == 115 )
		goto st270;
	goto tr374;
st270:
	if ( ++p == pe )
		goto _test_eof270;
case 270:
	if ( (*p) == 61 )
		goto st271;
	goto tr374;
st271:
	if ( ++p == pe )
		goto _test_eof271;
case 271:
	if ( (*p) < 32 ) {
		if ( 9 <= (*p) && (*p) <= 13 )
			goto tr383;
	} else if ( (*p) > 43 ) {
		if ( (*p) > 61 ) {
			if ( 63 <= (*p) && (*p) <= 126 )
				goto tr383;
		} else if ( (*p) >= 45 )
			goto tr383;
	} else
		goto tr383;
	goto tr374;
tr385:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st272;
tr383:
#line 132 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_key(*this, "Genomes");
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st272;
st272:
	if ( ++p == pe )
		goto _test_eof272;
case 272:
#line 7066 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 44 )
		goto tr386;
	if ( (*p) < 32 ) {
		if ( 9 <= (*p) && (*p) <= 13 )
			goto tr385;
	} else if ( (*p) > 61 ) {
		if ( 63 <= (*p) && (*p) <= 126 )
			goto tr385;
	} else
		goto tr385;
	goto tr384;
tr386:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st273;
st273:
	if ( ++p == pe )
		goto _test_eof273;
case 273:
#line 7088 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 77 )
		goto st274;
	goto tr387;
st274:
	if ( ++p == pe )
		goto _test_eof274;
case 274:
	if ( (*p) == 105 )
		goto st275;
	goto tr387;
st275:
	if ( ++p == pe )
		goto _test_eof275;
case 275:
	if ( (*p) == 120 )
		goto st276;
	goto tr387;
st276:
	if ( ++p == pe )
		goto _test_eof276;
case 276:
	if ( (*p) == 116 )
		goto st277;
	goto tr387;
st277:
	if ( ++p == pe )
		goto _test_eof277;
case 277:
	if ( (*p) == 117 )
		goto st278;
	goto tr387;
st278:
	if ( ++p == pe )
		goto _test_eof278;
case 278:
	if ( (*p) == 114 )
		goto st279;
	goto tr387;
st279:
	if ( ++p == pe )
		goto _test_eof279;
case 279:
	if ( (*p) == 101 )
		goto st280;
	goto tr387;
st280:
	if ( ++p == pe )
		goto _test_eof280;
case 280:
	if ( (*p) == 61 )
		goto st281;
	goto tr387;
st281:
	if ( ++p == pe )
		goto _test_eof281;
case 281:
	if ( (*p) < 32 ) {
		if ( 9 <= (*p) && (*p) <= 13 )
			goto tr396;
	} else if ( (*p) > 43 ) {
		if ( (*p) > 61 ) {
			if ( 63 <= (*p) && (*p) <= 126 )
				goto tr396;
		} else if ( (*p) >= 45 )
			goto tr396;
	} else
		goto tr396;
	goto tr387;
tr398:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st282;
tr396:
#line 136 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_key(*this, "Mixture");
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st282;
st282:
	if ( ++p == pe )
		goto _test_eof282;
case 282:
#line 7181 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 44 )
		goto tr399;
	if ( (*p) < 32 ) {
		if ( 9 <= (*p) && (*p) <= 13 )
			goto tr398;
	} else if ( (*p) > 61 ) {
		if ( 63 <= (*p) && (*p) <= 126 )
			goto tr398;
	} else
		goto tr398;
	goto tr397;
tr399:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st283;
st283:
	if ( ++p == pe )
		goto _test_eof283;
case 283:
#line 7203 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 68 )
		goto st284;
	goto tr400;
st284:
	if ( ++p == pe )
		goto _test_eof284;
case 284:
	if ( (*p) == 101 )
		goto st285;
	goto tr400;
st285:
	if ( ++p == pe )
		goto _test_eof285;
case 285:
	if ( (*p) == 115 )
		goto st286;
	goto tr400;
st286:
	if ( ++p == pe )
		goto _test_eof286;
case 286:
	if ( (*p) == 99 )
		goto st287;
	goto tr400;
st287:
	if ( ++p == pe )
		goto _test_eof287;
case 287:
	if ( (*p) == 114 )
		goto st288;
	goto tr400;
st288:
	if ( ++p == pe )
		goto _test_eof288;
case 288:
	if ( (*p) == 105 )
		goto st289;
	goto tr400;
st289:
	if ( ++p == pe )
		goto _test_eof289;
case 289:
	if ( (*p) == 112 )
		goto st290;
	goto tr400;
st290:
	if ( ++p == pe )
		goto _test_eof290;
case 290:
	if ( (*p) == 116 )
		goto st291;
	goto tr400;
st291:
	if ( ++p == pe )
		goto _test_eof291;
case 291:
	if ( (*p) == 105 )
		goto st292;
	goto tr400;
st292:
	if ( ++p == pe )
		goto _test_eof292;
case 292:
	if ( (*p) == 111 )
		goto st293;
	goto tr400;
st293:
	if ( ++p == pe )
		goto _test_eof293;
case 293:
	if ( (*p) == 110 )
		goto st294;
	goto tr400;
st294:
	if ( ++p == pe )
		goto _test_eof294;
case 294:
	if ( (*p) == 61 )
		goto st295;
	goto tr400;
st295:
	if ( ++p == pe )
		goto _test_eof295;
case 295:
	if ( (*p) == 34 )
		goto tr413;
	goto tr400;
tr413:
#line 128 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_key(*this, "Description");
    }
	goto st296;
st296:
	if ( ++p == pe )
		goto _test_eof296;
case 296:
#line 7301 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) > 33 ) {
		if ( 35 <= (*p) && (*p) <= 126 )
			goto tr414;
	} else if ( (*p) >= 32 )
		goto tr414;
	goto tr400;
tr414:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st297;
tr415:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st297;
st297:
	if ( ++p == pe )
		goto _test_eof297;
case 297:
#line 7328 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 34 )
		goto tr416;
	if ( 32 <= (*p) && (*p) <= 126 )
		goto tr415;
	goto tr400;
tr416:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st298;
st298:
	if ( ++p == pe )
		goto _test_eof298;
case 298:
#line 7344 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 62 )
		goto st299;
	goto tr400;
st299:
	if ( ++p == pe )
		goto _test_eof299;
case 299:
	if ( (*p) == 10 )
		goto tr49;
	goto tr356;
tr31:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st300;
st300:
	if ( ++p == pe )
		goto _test_eof300;
case 300:
#line 7369 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 95: goto tr37;
		case 115: goto tr419;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr418;
tr419:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st301;
st301:
	if ( ++p == pe )
		goto _test_eof301;
case 301:
#line 7407 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 95: goto tr37;
		case 115: goto tr420;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr418;
tr420:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st302;
st302:
	if ( ++p == pe )
		goto _test_eof302;
case 302:
#line 7445 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 95: goto tr37;
		case 101: goto tr421;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr418;
tr421:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st303;
st303:
	if ( ++p == pe )
		goto _test_eof303;
case 303:
#line 7483 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 95: goto tr37;
		case 109: goto tr422;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr418;
tr422:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st304;
st304:
	if ( ++p == pe )
		goto _test_eof304;
case 304:
#line 7521 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 95: goto tr37;
		case 98: goto tr423;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr418;
tr423:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st305;
st305:
	if ( ++p == pe )
		goto _test_eof305;
case 305:
#line 7559 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 95: goto tr37;
		case 108: goto tr424;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr418;
tr424:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st306;
st306:
	if ( ++p == pe )
		goto _test_eof306;
case 306:
#line 7597 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 95: goto tr37;
		case 121: goto tr425;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr418;
tr425:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st307;
st307:
	if ( ++p == pe )
		goto _test_eof307;
case 307:
#line 7635 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr426;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr418;
tr426:
#line 84 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_typeid(*this, "assembly");
    }
	goto st308;
st308:
	if ( ++p == pe )
		goto _test_eof308;
case 308:
#line 7672 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr428;
	} else if ( (*p) >= 65 )
		goto tr428;
	goto tr427;
tr428:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st309;
st309:
	if ( ++p == pe )
		goto _test_eof309;
case 309:
#line 7689 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr427;
		case 35: goto tr427;
		case 47: goto tr427;
		case 58: goto tr427;
		case 63: goto tr427;
	}
	goto st310;
st310:
	if ( ++p == pe )
		goto _test_eof310;
case 310:
	switch( (*p) ) {
		case 10: goto tr427;
		case 35: goto tr427;
		case 47: goto tr427;
		case 58: goto st311;
		case 63: goto tr427;
	}
	goto st310;
st311:
	if ( ++p == pe )
		goto _test_eof311;
case 311:
	if ( (*p) == 47 )
		goto st312;
	goto tr427;
st312:
	if ( ++p == pe )
		goto _test_eof312;
case 312:
	if ( (*p) == 47 )
		goto st313;
	goto tr427;
st313:
	if ( ++p == pe )
		goto _test_eof313;
case 313:
	if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr433;
	} else if ( (*p) >= 65 )
		goto tr433;
	goto tr427;
tr433:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st314;
st314:
	if ( ++p == pe )
		goto _test_eof314;
case 314:
#line 7744 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 10 )
		goto tr35;
	goto tr433;
tr32:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st315;
st315:
	if ( ++p == pe )
		goto _test_eof315;
case 315:
#line 7762 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 95: goto tr37;
		case 111: goto tr435;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr434;
tr435:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st316;
st316:
	if ( ++p == pe )
		goto _test_eof316;
case 316:
#line 7800 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 95: goto tr37;
		case 110: goto tr436;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr434;
tr436:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st317;
st317:
	if ( ++p == pe )
		goto _test_eof317;
case 317:
#line 7838 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 95: goto tr37;
		case 116: goto tr437;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr434;
tr437:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st318;
st318:
	if ( ++p == pe )
		goto _test_eof318;
case 318:
#line 7876 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 95: goto tr37;
		case 105: goto tr438;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr434;
tr438:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st319;
st319:
	if ( ++p == pe )
		goto _test_eof319;
case 319:
#line 7914 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 95: goto tr37;
		case 103: goto tr439;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr434;
tr439:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st320;
st320:
	if ( ++p == pe )
		goto _test_eof320;
case 320:
#line 7952 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr440;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr434;
tr440:
#line 88 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_typeid(*this, "contig");
    }
	goto st321;
st321:
	if ( ++p == pe )
		goto _test_eof321;
case 321:
#line 7989 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 60 )
		goto st322;
	goto tr434;
st322:
	if ( ++p == pe )
		goto _test_eof322;
case 322:
	if ( (*p) == 73 )
		goto st323;
	goto tr434;
st323:
	if ( ++p == pe )
		goto _test_eof323;
case 323:
	if ( (*p) == 68 )
		goto st324;
	goto tr434;
st324:
	if ( ++p == pe )
		goto _test_eof324;
case 324:
	if ( (*p) == 61 )
		goto st325;
	goto tr434;
st325:
	if ( ++p == pe )
		goto _test_eof325;
case 325:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr446;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr446;
	} else
		goto tr446;
	goto tr445;
tr446:
#line 116 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_key(*this, "ID");
    }
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st326;
st326:
	if ( ++p == pe )
		goto _test_eof326;
case 326:
#line 8045 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 44: goto tr448;
		case 59: goto tr447;
		case 62: goto tr450;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 33 <= (*p) && (*p) <= 47 )
				goto tr447;
		} else if ( (*p) > 57 ) {
			if ( 61 <= (*p) && (*p) <= 64 )
				goto tr447;
		} else
			goto tr449;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr447;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr447;
		} else
			goto tr449;
	} else
		goto tr449;
	goto tr445;
tr447:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st327;
st327:
	if ( ++p == pe )
		goto _test_eof327;
case 327:
#line 8082 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 59: goto tr447;
		case 61: goto tr447;
	}
	if ( (*p) < 63 ) {
		if ( (*p) < 45 ) {
			if ( 33 <= (*p) && (*p) <= 43 )
				goto tr447;
		} else if ( (*p) > 47 ) {
			if ( 48 <= (*p) && (*p) <= 57 )
				goto tr449;
		} else
			goto tr447;
	} else if ( (*p) > 64 ) {
		if ( (*p) < 91 ) {
			if ( 65 <= (*p) && (*p) <= 90 )
				goto tr449;
		} else if ( (*p) > 96 ) {
			if ( (*p) > 122 ) {
				if ( 123 <= (*p) && (*p) <= 126 )
					goto tr447;
			} else if ( (*p) >= 97 )
				goto tr449;
		} else
			goto tr447;
	} else
		goto tr447;
	goto tr445;
tr449:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st328;
st328:
	if ( ++p == pe )
		goto _test_eof328;
case 328:
#line 8121 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 44: goto tr448;
		case 59: goto tr449;
		case 62: goto tr450;
	}
	if ( (*p) > 57 ) {
		if ( 61 <= (*p) && (*p) <= 126 )
			goto tr449;
	} else if ( (*p) >= 33 )
		goto tr449;
	goto tr445;
tr448:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st329;
st329:
	if ( ++p == pe )
		goto _test_eof329;
case 329:
#line 8143 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 95 )
		goto tr451;
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto tr451;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr452;
		} else if ( (*p) >= 65 )
			goto tr452;
	} else
		goto tr452;
	goto tr434;
tr451:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st330;
st330:
	if ( ++p == pe )
		goto _test_eof330;
case 330:
#line 8168 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 95 )
		goto st330;
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto st330;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr454;
		} else if ( (*p) >= 65 )
			goto tr454;
	} else
		goto tr454;
	goto tr434;
tr452:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st331;
tr454:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st331;
st331:
	if ( ++p == pe )
		goto _test_eof331;
case 331:
#line 8203 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 61: goto tr455;
		case 95: goto tr454;
	}
	if ( (*p) < 48 ) {
		if ( 45 <= (*p) && (*p) <= 46 )
			goto tr454;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr454;
		} else if ( (*p) >= 65 )
			goto tr454;
	} else
		goto tr454;
	goto tr434;
tr455:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st332;
st332:
	if ( ++p == pe )
		goto _test_eof332;
case 332:
#line 8230 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) < 32 ) {
		if ( 9 <= (*p) && (*p) <= 13 )
			goto tr456;
	} else if ( (*p) > 43 ) {
		if ( (*p) > 61 ) {
			if ( 63 <= (*p) && (*p) <= 126 )
				goto tr456;
		} else if ( (*p) >= 45 )
			goto tr456;
	} else
		goto tr456;
	goto tr434;
tr456:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st333;
tr457:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st333;
st333:
	if ( ++p == pe )
		goto _test_eof333;
case 333:
#line 8263 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 44: goto tr448;
		case 62: goto tr450;
	}
	if ( (*p) > 13 ) {
		if ( 32 <= (*p) && (*p) <= 126 )
			goto tr457;
	} else if ( (*p) >= 9 )
		goto tr457;
	goto tr434;
tr450:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st334;
st334:
	if ( ++p == pe )
		goto _test_eof334;
case 334:
#line 8284 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 10 )
		goto tr49;
	goto tr434;
tr33:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st335;
st335:
	if ( ++p == pe )
		goto _test_eof335;
case 335:
#line 8302 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 95: goto tr37;
		case 101: goto tr459;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr458;
tr459:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st336;
st336:
	if ( ++p == pe )
		goto _test_eof336;
case 336:
#line 8340 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 95: goto tr37;
		case 100: goto tr460;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr458;
tr460:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st337;
st337:
	if ( ++p == pe )
		goto _test_eof337;
case 337:
#line 8378 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 95: goto tr37;
		case 105: goto tr461;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr458;
tr461:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st338;
st338:
	if ( ++p == pe )
		goto _test_eof338;
case 338:
#line 8416 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 95: goto tr37;
		case 103: goto tr462;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr458;
tr462:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st339;
st339:
	if ( ++p == pe )
		goto _test_eof339;
case 339:
#line 8454 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 95: goto tr37;
		case 114: goto tr463;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr458;
tr463:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st340;
st340:
	if ( ++p == pe )
		goto _test_eof340;
case 340:
#line 8492 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 95: goto tr37;
		case 101: goto tr464;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr458;
tr464:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st341;
st341:
	if ( ++p == pe )
		goto _test_eof341;
case 341:
#line 8530 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 95: goto tr37;
		case 101: goto tr465;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr458;
tr465:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st342;
st342:
	if ( ++p == pe )
		goto _test_eof342;
case 342:
#line 8568 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 68: goto tr466;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr458;
tr466:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st343;
st343:
	if ( ++p == pe )
		goto _test_eof343;
case 343:
#line 8606 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr38;
		case 66: goto tr467;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr458;
tr467:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st344;
st344:
	if ( ++p == pe )
		goto _test_eof344;
case 344:
#line 8644 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 61: goto tr468;
		case 95: goto tr37;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr36;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr36;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr36;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr36;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr458;
tr468:
#line 108 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_meta_typeid(*this, "pedigreeDB");
    }
	goto st345;
st345:
	if ( ++p == pe )
		goto _test_eof345;
case 345:
#line 8681 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 60 )
		goto st346;
	goto tr458;
st346:
	if ( ++p == pe )
		goto _test_eof346;
case 346:
	if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr471;
	} else if ( (*p) >= 65 )
		goto tr471;
	goto tr470;
tr471:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st347;
st347:
	if ( ++p == pe )
		goto _test_eof347;
case 347:
#line 8705 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr470;
		case 35: goto tr470;
		case 47: goto tr470;
		case 58: goto tr470;
		case 63: goto tr470;
	}
	goto st348;
st348:
	if ( ++p == pe )
		goto _test_eof348;
case 348:
	switch( (*p) ) {
		case 10: goto tr470;
		case 35: goto tr470;
		case 47: goto tr470;
		case 58: goto st349;
		case 63: goto tr470;
	}
	goto st348;
st349:
	if ( ++p == pe )
		goto _test_eof349;
case 349:
	if ( (*p) == 47 )
		goto st350;
	goto tr470;
st350:
	if ( ++p == pe )
		goto _test_eof350;
case 350:
	if ( (*p) == 47 )
		goto st351;
	goto tr470;
st351:
	if ( ++p == pe )
		goto _test_eof351;
case 351:
	if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr476;
	} else if ( (*p) >= 65 )
		goto tr476;
	goto tr470;
tr476:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st352;
st352:
	if ( ++p == pe )
		goto _test_eof352;
case 352:
#line 8760 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr470;
		case 62: goto tr477;
	}
	goto tr476;
tr477:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st353;
st353:
	if ( ++p == pe )
		goto _test_eof353;
case 353:
#line 8780 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr49;
		case 62: goto tr477;
	}
	goto tr476;
st354:
	if ( ++p == pe )
		goto _test_eof354;
case 354:
	if ( (*p) == 72 )
		goto st355;
	goto tr478;
st355:
	if ( ++p == pe )
		goto _test_eof355;
case 355:
	if ( (*p) == 82 )
		goto st356;
	goto tr478;
st356:
	if ( ++p == pe )
		goto _test_eof356;
case 356:
	if ( (*p) == 79 )
		goto st357;
	goto tr478;
st357:
	if ( ++p == pe )
		goto _test_eof357;
case 357:
	if ( (*p) == 77 )
		goto st358;
	goto tr478;
st358:
	if ( ++p == pe )
		goto _test_eof358;
case 358:
	if ( (*p) == 9 )
		goto st359;
	goto tr478;
st359:
	if ( ++p == pe )
		goto _test_eof359;
case 359:
	if ( (*p) == 80 )
		goto st360;
	goto tr478;
st360:
	if ( ++p == pe )
		goto _test_eof360;
case 360:
	if ( (*p) == 79 )
		goto st361;
	goto tr478;
st361:
	if ( ++p == pe )
		goto _test_eof361;
case 361:
	if ( (*p) == 83 )
		goto st362;
	goto tr478;
st362:
	if ( ++p == pe )
		goto _test_eof362;
case 362:
	if ( (*p) == 9 )
		goto st363;
	goto tr478;
st363:
	if ( ++p == pe )
		goto _test_eof363;
case 363:
	if ( (*p) == 73 )
		goto st364;
	goto tr478;
st364:
	if ( ++p == pe )
		goto _test_eof364;
case 364:
	if ( (*p) == 68 )
		goto st365;
	goto tr478;
st365:
	if ( ++p == pe )
		goto _test_eof365;
case 365:
	if ( (*p) == 9 )
		goto st366;
	goto tr478;
st366:
	if ( ++p == pe )
		goto _test_eof366;
case 366:
	if ( (*p) == 82 )
		goto st367;
	goto tr478;
st367:
	if ( ++p == pe )
		goto _test_eof367;
case 367:
	if ( (*p) == 69 )
		goto st368;
	goto tr478;
st368:
	if ( ++p == pe )
		goto _test_eof368;
case 368:
	if ( (*p) == 70 )
		goto st369;
	goto tr478;
st369:
	if ( ++p == pe )
		goto _test_eof369;
case 369:
	if ( (*p) == 9 )
		goto st370;
	goto tr478;
st370:
	if ( ++p == pe )
		goto _test_eof370;
case 370:
	if ( (*p) == 65 )
		goto st371;
	goto tr478;
st371:
	if ( ++p == pe )
		goto _test_eof371;
case 371:
	if ( (*p) == 76 )
		goto st372;
	goto tr478;
st372:
	if ( ++p == pe )
		goto _test_eof372;
case 372:
	if ( (*p) == 84 )
		goto st373;
	goto tr478;
st373:
	if ( ++p == pe )
		goto _test_eof373;
case 373:
	if ( (*p) == 9 )
		goto st374;
	goto tr478;
st374:
	if ( ++p == pe )
		goto _test_eof374;
case 374:
	if ( (*p) == 81 )
		goto st375;
	goto tr478;
st375:
	if ( ++p == pe )
		goto _test_eof375;
case 375:
	if ( (*p) == 85 )
		goto st376;
	goto tr478;
st376:
	if ( ++p == pe )
		goto _test_eof376;
case 376:
	if ( (*p) == 65 )
		goto st377;
	goto tr478;
st377:
	if ( ++p == pe )
		goto _test_eof377;
case 377:
	if ( (*p) == 76 )
		goto st378;
	goto tr478;
st378:
	if ( ++p == pe )
		goto _test_eof378;
case 378:
	if ( (*p) == 9 )
		goto st379;
	goto tr478;
st379:
	if ( ++p == pe )
		goto _test_eof379;
case 379:
	if ( (*p) == 70 )
		goto st380;
	goto tr478;
st380:
	if ( ++p == pe )
		goto _test_eof380;
case 380:
	if ( (*p) == 73 )
		goto st381;
	goto tr478;
st381:
	if ( ++p == pe )
		goto _test_eof381;
case 381:
	if ( (*p) == 76 )
		goto st382;
	goto tr478;
st382:
	if ( ++p == pe )
		goto _test_eof382;
case 382:
	if ( (*p) == 84 )
		goto st383;
	goto tr478;
st383:
	if ( ++p == pe )
		goto _test_eof383;
case 383:
	if ( (*p) == 69 )
		goto st384;
	goto tr478;
st384:
	if ( ++p == pe )
		goto _test_eof384;
case 384:
	if ( (*p) == 82 )
		goto st385;
	goto tr478;
st385:
	if ( ++p == pe )
		goto _test_eof385;
case 385:
	if ( (*p) == 9 )
		goto st386;
	goto tr478;
st386:
	if ( ++p == pe )
		goto _test_eof386;
case 386:
	if ( (*p) == 73 )
		goto st387;
	goto tr478;
st387:
	if ( ++p == pe )
		goto _test_eof387;
case 387:
	if ( (*p) == 78 )
		goto st388;
	goto tr478;
st388:
	if ( ++p == pe )
		goto _test_eof388;
case 388:
	if ( (*p) == 70 )
		goto st389;
	goto tr478;
st389:
	if ( ++p == pe )
		goto _test_eof389;
case 389:
	if ( (*p) == 79 )
		goto st390;
	goto tr478;
st390:
	if ( ++p == pe )
		goto _test_eof390;
case 390:
	switch( (*p) ) {
		case 9: goto st391;
		case 10: goto tr516;
	}
	goto tr478;
st391:
	if ( ++p == pe )
		goto _test_eof391;
case 391:
	if ( (*p) == 70 )
		goto st392;
	goto tr517;
st392:
	if ( ++p == pe )
		goto _test_eof392;
case 392:
	if ( (*p) == 79 )
		goto st393;
	goto tr517;
st393:
	if ( ++p == pe )
		goto _test_eof393;
case 393:
	if ( (*p) == 82 )
		goto st394;
	goto tr517;
st394:
	if ( ++p == pe )
		goto _test_eof394;
case 394:
	if ( (*p) == 77 )
		goto st395;
	goto tr517;
st395:
	if ( ++p == pe )
		goto _test_eof395;
case 395:
	if ( (*p) == 65 )
		goto st396;
	goto tr517;
st396:
	if ( ++p == pe )
		goto _test_eof396;
case 396:
	if ( (*p) == 84 )
		goto st397;
	goto tr517;
st397:
	if ( ++p == pe )
		goto _test_eof397;
case 397:
	if ( (*p) == 9 )
		goto st398;
	goto tr517;
tr526:
#line 156 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_sample_name(*this);
    }
	goto st398;
st398:
	if ( ++p == pe )
		goto _test_eof398;
case 398:
#line 9106 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( 32 <= (*p) && (*p) <= 126 )
		goto tr525;
	goto tr517;
tr525:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st399;
tr528:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st399;
st399:
	if ( ++p == pe )
		goto _test_eof399;
case 399:
#line 9130 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr526;
		case 10: goto tr527;
	}
	if ( 32 <= (*p) && (*p) <= 126 )
		goto tr528;
	goto tr517;
tr516:
#line 160 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_header_line(*this);
    }
#line 27 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_newline(*this);
        ++n_lines;
        n_columns = 1;

        if (n_lines % 10000 == 0) {
            std::cout << "Lines read: " << n_lines << std::endl;
        }
    }
	goto st623;
tr527:
#line 156 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_sample_name(*this);
    }
#line 160 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_header_line(*this);
    }
#line 27 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_newline(*this);
        ++n_lines;
        n_columns = 1;

        if (n_lines % 10000 == 0) {
            std::cout << "Lines read: " << n_lines << std::endl;
        }
    }
	goto st623;
st623:
	if ( ++p == pe )
		goto _test_eof623;
case 623:
#line 9178 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 60 )
		goto st423;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr809;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr809;
	} else
		goto tr809;
	goto tr808;
tr809:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st400;
st400:
	if ( ++p == pe )
		goto _test_eof400;
case 400:
#line 9204 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr530;
		case 59: goto tr531;
		case 61: goto tr531;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 33 <= (*p) && (*p) <= 47 )
				goto tr531;
		} else if ( (*p) > 57 ) {
			if ( 63 <= (*p) && (*p) <= 64 )
				goto tr531;
		} else
			goto tr532;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr531;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr531;
		} else
			goto tr532;
	} else
		goto tr532;
	goto tr529;
tr530:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
#line 37 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_column_end(*this, n_columns);
        ++n_columns;
    }
	goto st401;
tr609:
#line 37 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_column_end(*this, n_columns);
        ++n_columns;
    }
	goto st401;
st401:
	if ( ++p == pe )
		goto _test_eof401;
case 401:
#line 9253 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 45 )
		goto tr534;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr535;
	goto tr533;
tr534:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st402;
st402:
	if ( ++p == pe )
		goto _test_eof402;
case 402:
#line 9269 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr536;
	goto tr533;
tr535:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st403;
tr536:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st403;
st403:
	if ( ++p == pe )
		goto _test_eof403;
case 403:
#line 9293 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 9 )
		goto tr537;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr536;
	goto tr533;
tr542:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st404;
tr537:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
#line 37 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_column_end(*this, n_columns);
        ++n_columns;
    }
	goto st404;
st404:
	if ( ++p == pe )
		goto _test_eof404;
case 404:
#line 9320 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) > 58 ) {
		if ( 60 <= (*p) && (*p) <= 126 )
			goto tr539;
	} else if ( (*p) >= 33 )
		goto tr539;
	goto tr538;
tr539:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st405;
tr541:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st405;
st405:
	if ( ++p == pe )
		goto _test_eof405;
case 405:
#line 9347 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr540;
		case 59: goto tr542;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr541;
	goto tr538;
tr540:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
#line 37 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_column_end(*this, n_columns);
        ++n_columns;
    }
	goto st406;
st406:
	if ( ++p == pe )
		goto _test_eof406;
case 406:
#line 9370 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 65: goto tr544;
		case 67: goto tr544;
		case 71: goto tr544;
		case 78: goto tr544;
		case 84: goto tr544;
		case 97: goto tr544;
		case 99: goto tr544;
		case 103: goto tr544;
		case 110: goto tr544;
		case 116: goto tr544;
	}
	goto tr543;
tr544:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st407;
tr546:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st407;
st407:
	if ( ++p == pe )
		goto _test_eof407;
case 407:
#line 9404 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr545;
		case 65: goto tr546;
		case 67: goto tr546;
		case 71: goto tr546;
		case 78: goto tr546;
		case 84: goto tr546;
		case 97: goto tr546;
		case 99: goto tr546;
		case 103: goto tr546;
		case 110: goto tr546;
		case 116: goto tr546;
	}
	goto tr543;
tr545:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
#line 37 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_column_end(*this, n_columns);
        ++n_columns;
    }
	goto st408;
st408:
	if ( ++p == pe )
		goto _test_eof408;
case 408:
#line 9434 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 42: goto tr548;
		case 46: goto tr549;
		case 60: goto tr550;
		case 65: goto tr551;
		case 67: goto tr551;
		case 71: goto tr551;
		case 78: goto tr551;
		case 84: goto tr551;
		case 91: goto tr552;
		case 93: goto tr553;
		case 97: goto tr551;
		case 99: goto tr551;
		case 103: goto tr551;
		case 110: goto tr551;
		case 116: goto tr551;
	}
	goto tr547;
tr548:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st409;
tr755:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st409;
st409:
	if ( ++p == pe )
		goto _test_eof409;
case 409:
#line 9473 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr554;
		case 44: goto tr555;
	}
	goto tr547;
tr554:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
#line 37 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_column_end(*this, n_columns);
        ++n_columns;
    }
	goto st410;
st410:
	if ( ++p == pe )
		goto _test_eof410;
case 410:
#line 9494 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 45: goto tr557;
		case 46: goto tr558;
		case 48: goto tr559;
	}
	if ( 49 <= (*p) && (*p) <= 57 )
		goto tr560;
	goto tr556;
tr557:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st411;
st411:
	if ( ++p == pe )
		goto _test_eof411;
case 411:
#line 9517 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 48 )
		goto tr561;
	if ( 49 <= (*p) && (*p) <= 57 )
		goto tr562;
	goto tr556;
tr559:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st412;
tr561:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st412;
st412:
	if ( ++p == pe )
		goto _test_eof412;
case 412:
#line 9543 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr563;
		case 46: goto tr564;
		case 69: goto tr565;
		case 101: goto tr565;
	}
	goto tr556;
tr563:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
#line 37 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_column_end(*this, n_columns);
        ++n_columns;
    }
	goto st413;
st413:
	if ( ++p == pe )
		goto _test_eof413;
case 413:
#line 9566 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 46: goto tr568;
		case 58: goto tr567;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 33 <= (*p) && (*p) <= 47 )
				goto tr567;
		} else if ( (*p) > 57 ) {
			if ( 60 <= (*p) && (*p) <= 64 )
				goto tr567;
		} else
			goto tr569;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr567;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr567;
		} else
			goto tr569;
	} else
		goto tr569;
	goto tr566;
tr567:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st414;
st414:
	if ( ++p == pe )
		goto _test_eof414;
case 414:
#line 9602 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 58 )
		goto st414;
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 33 <= (*p) && (*p) <= 47 )
				goto st414;
		} else if ( (*p) > 57 ) {
			if ( 60 <= (*p) && (*p) <= 64 )
				goto st414;
		} else
			goto tr571;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto st414;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto st414;
		} else
			goto tr571;
	} else
		goto tr571;
	goto tr566;
tr569:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st415;
tr571:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st415;
st415:
	if ( ++p == pe )
		goto _test_eof415;
case 415:
#line 9646 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr572;
		case 59: goto tr573;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr571;
	goto tr566;
tr572:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
#line 37 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_column_end(*this, n_columns);
        ++n_columns;
    }
	goto st416;
st416:
	if ( ++p == pe )
		goto _test_eof416;
case 416:
#line 9669 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 46: goto tr576;
		case 49: goto tr578;
		case 58: goto tr575;
		case 60: goto tr575;
		case 65: goto tr579;
		case 66: goto tr580;
		case 67: goto tr581;
		case 68: goto tr582;
		case 69: goto tr583;
		case 72: goto tr584;
		case 77: goto tr585;
		case 78: goto tr586;
		case 83: goto tr587;
		case 86: goto tr588;
	}
	if ( (*p) < 70 ) {
		if ( (*p) < 48 ) {
			if ( 33 <= (*p) && (*p) <= 47 )
				goto tr575;
		} else if ( (*p) > 57 ) {
			if ( 62 <= (*p) && (*p) <= 64 )
				goto tr575;
		} else
			goto tr577;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr575;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr575;
		} else
			goto tr577;
	} else
		goto tr577;
	goto tr574;
tr575:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st417;
tr589:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st417;
st417:
	if ( ++p == pe )
		goto _test_eof417;
case 417:
#line 9727 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 58: goto tr589;
		case 60: goto tr589;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 33 <= (*p) && (*p) <= 47 )
				goto tr589;
		} else if ( (*p) > 57 ) {
			if ( 62 <= (*p) && (*p) <= 64 )
				goto tr589;
		} else
			goto tr590;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr589;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr589;
		} else
			goto tr590;
	} else
		goto tr590;
	goto tr574;
tr577:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st418;
tr590:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st418;
st418:
	if ( ++p == pe )
		goto _test_eof418;
case 418:
#line 9773 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr594;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr574;
tr599:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st419;
tr591:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
#line 37 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_column_end(*this, n_columns);
        ++n_columns;
    }
	goto st419;
st419:
	if ( ++p == pe )
		goto _test_eof419;
case 419:
#line 9804 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr596;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr596;
	} else
		goto tr596;
	goto tr595;
tr596:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st420;
tr598:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st420;
st420:
	if ( ++p == pe )
		goto _test_eof420;
case 420:
#line 9834 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr597;
		case 58: goto tr599;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr598;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr598;
	} else
		goto tr598;
	goto tr595;
tr597:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
#line 37 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_column_end(*this, n_columns);
        ++n_columns;
    }
	goto st421;
st421:
	if ( ++p == pe )
		goto _test_eof421;
case 421:
#line 9863 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 46 )
		goto tr601;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr602;
	goto tr600;
tr601:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st422;
tr610:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st422;
st422:
	if ( ++p == pe )
		goto _test_eof422;
case 422:
#line 9889 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr597;
		case 10: goto tr592;
		case 47: goto tr603;
		case 58: goto tr604;
		case 124: goto tr603;
	}
	goto tr600;
tr592:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
#line 166 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        // Handle last sample if proceeds
        if (n_columns > 9) {
          ParsePolicy::handle_column_end(*this, n_columns);
        }
        
        // Check warnings (non-blocking errors but potential mistakes anyway)
        try {
          optional_check_body_entry();
        } catch (ParsingWarning ex) {
          ErrorPolicy::handle_body_section_warning(*this, ex.what());
        }
        
        // Handle all columns in the record
        try {
          ParsePolicy::handle_body_line(*this);
        } catch (ParsingError ex) {
          ErrorPolicy::handle_body_section_error(*this, ex.what());
        }
    }
#line 27 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_newline(*this);
        ++n_lines;
        n_columns = 1;

        if (n_lines % 10000 == 0) {
            std::cout << "Lines read: " << n_lines << std::endl;
        }
    }
	goto st624;
st624:
	if ( ++p == pe )
		goto _test_eof624;
case 624:
#line 9939 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 60 )
		goto st423;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr809;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr809;
	} else
		goto tr809;
	goto tr529;
st423:
	if ( ++p == pe )
		goto _test_eof423;
case 423:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr605;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr605;
	} else
		goto tr605;
	goto tr529;
tr605:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st424;
st424:
	if ( ++p == pe )
		goto _test_eof424;
case 424:
#line 9978 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 59: goto tr606;
		case 62: goto tr608;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 33 <= (*p) && (*p) <= 47 )
				goto tr606;
		} else if ( (*p) > 57 ) {
			if ( 61 <= (*p) && (*p) <= 64 )
				goto tr606;
		} else
			goto tr607;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr606;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr606;
		} else
			goto tr607;
	} else
		goto tr607;
	goto tr529;
tr606:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st425;
st425:
	if ( ++p == pe )
		goto _test_eof425;
case 425:
#line 10014 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 59: goto tr606;
		case 61: goto tr606;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 33 <= (*p) && (*p) <= 47 )
				goto tr606;
		} else if ( (*p) > 57 ) {
			if ( 63 <= (*p) && (*p) <= 64 )
				goto tr606;
		} else
			goto tr607;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr606;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr606;
		} else
			goto tr607;
	} else
		goto tr607;
	goto tr529;
tr607:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st426;
st426:
	if ( ++p == pe )
		goto _test_eof426;
case 426:
#line 10050 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 59: goto tr607;
		case 62: goto tr608;
	}
	if ( (*p) > 57 ) {
		if ( 61 <= (*p) && (*p) <= 126 )
			goto tr607;
	} else if ( (*p) >= 33 )
		goto tr607;
	goto tr529;
tr608:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st427;
st427:
	if ( ++p == pe )
		goto _test_eof427;
case 427:
#line 10071 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 9 )
		goto tr609;
	goto tr529;
tr603:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st428;
st428:
	if ( ++p == pe )
		goto _test_eof428;
case 428:
#line 10085 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 46 )
		goto tr610;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr611;
	goto tr600;
tr602:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st429;
tr611:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st429;
st429:
	if ( ++p == pe )
		goto _test_eof429;
case 429:
#line 10111 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr597;
		case 10: goto tr592;
		case 47: goto tr603;
		case 58: goto tr604;
		case 124: goto tr603;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr611;
	goto tr600;
tr604:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st430;
st430:
	if ( ++p == pe )
		goto _test_eof430;
case 430:
#line 10132 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) > 57 ) {
		if ( 59 <= (*p) && (*p) <= 126 )
			goto tr613;
	} else if ( (*p) >= 33 )
		goto tr613;
	goto tr612;
tr613:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st431;
st431:
	if ( ++p == pe )
		goto _test_eof431;
case 431:
#line 10149 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr597;
		case 10: goto tr592;
		case 58: goto tr604;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr613;
	goto tr612;
tr593:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st432;
st432:
	if ( ++p == pe )
		goto _test_eof432;
case 432:
#line 10168 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 49: goto tr578;
		case 58: goto tr575;
		case 60: goto tr575;
		case 65: goto tr579;
		case 66: goto tr580;
		case 67: goto tr581;
		case 68: goto tr582;
		case 69: goto tr583;
		case 72: goto tr584;
		case 77: goto tr585;
		case 78: goto tr586;
		case 83: goto tr587;
		case 86: goto tr588;
	}
	if ( (*p) < 70 ) {
		if ( (*p) < 48 ) {
			if ( 33 <= (*p) && (*p) <= 47 )
				goto tr575;
		} else if ( (*p) > 57 ) {
			if ( 62 <= (*p) && (*p) <= 64 )
				goto tr575;
		} else
			goto tr577;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr575;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr575;
		} else
			goto tr577;
	} else
		goto tr577;
	goto tr574;
tr578:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st433;
st433:
	if ( ++p == pe )
		goto _test_eof433;
case 433:
#line 10219 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 48: goto tr614;
		case 59: goto tr593;
		case 61: goto tr594;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr574;
tr614:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st434;
st434:
	if ( ++p == pe )
		goto _test_eof434;
case 434:
#line 10240 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 48: goto tr615;
		case 59: goto tr593;
		case 61: goto tr594;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr574;
tr615:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st435;
st435:
	if ( ++p == pe )
		goto _test_eof435;
case 435:
#line 10261 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 48: goto tr616;
		case 59: goto tr593;
		case 61: goto tr594;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr574;
tr616:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st436;
st436:
	if ( ++p == pe )
		goto _test_eof436;
case 436:
#line 10282 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr594;
		case 71: goto tr617;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr574;
tr594:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st437;
st437:
	if ( ++p == pe )
		goto _test_eof437;
case 437:
#line 10303 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) > 58 ) {
		if ( 60 <= (*p) && (*p) <= 126 )
			goto tr619;
	} else if ( (*p) >= 33 )
		goto tr619;
	goto tr618;
tr619:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st438;
st438:
	if ( ++p == pe )
		goto _test_eof438;
case 438:
#line 10320 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr619;
	goto tr618;
tr617:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st439;
st439:
	if ( ++p == pe )
		goto _test_eof439;
case 439:
#line 10339 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr621;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr620;
tr621:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st440;
st440:
	if ( ++p == pe )
		goto _test_eof440;
case 440:
#line 10359 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( 48 <= (*p) && (*p) <= 49 )
		goto tr623;
	goto tr622;
tr623:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st441;
st441:
	if ( ++p == pe )
		goto _test_eof441;
case 441:
#line 10373 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
	}
	goto tr622;
tr579:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st442;
st442:
	if ( ++p == pe )
		goto _test_eof442;
case 442:
#line 10394 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr594;
		case 65: goto tr624;
		case 67: goto tr625;
		case 70: goto tr626;
		case 78: goto tr627;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr574;
tr624:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st443;
st443:
	if ( ++p == pe )
		goto _test_eof443;
case 443:
#line 10418 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 61 )
		goto tr628;
	if ( (*p) > 58 ) {
		if ( 60 <= (*p) && (*p) <= 126 )
			goto tr590;
	} else if ( (*p) >= 33 )
		goto tr590;
	goto tr574;
tr628:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st444;
st444:
	if ( ++p == pe )
		goto _test_eof444;
case 444:
#line 10437 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 46: goto tr630;
		case 65: goto tr631;
		case 67: goto tr631;
		case 71: goto tr631;
		case 78: goto tr631;
		case 84: goto tr631;
		case 97: goto tr631;
		case 99: goto tr631;
		case 103: goto tr631;
		case 110: goto tr631;
		case 116: goto tr631;
	}
	goto tr629;
tr630:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st445;
st445:
	if ( ++p == pe )
		goto _test_eof445;
case 445:
#line 10462 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
	}
	goto tr629;
tr631:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st446;
st446:
	if ( ++p == pe )
		goto _test_eof446;
case 446:
#line 10479 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 65: goto tr631;
		case 67: goto tr631;
		case 71: goto tr631;
		case 78: goto tr631;
		case 84: goto tr631;
		case 97: goto tr631;
		case 99: goto tr631;
		case 103: goto tr631;
		case 110: goto tr631;
		case 116: goto tr631;
	}
	goto tr629;
tr625:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st447;
st447:
	if ( ++p == pe )
		goto _test_eof447;
case 447:
#line 10506 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 61 )
		goto tr632;
	if ( (*p) > 58 ) {
		if ( 60 <= (*p) && (*p) <= 126 )
			goto tr590;
	} else if ( (*p) >= 33 )
		goto tr590;
	goto tr574;
tr632:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st448;
st448:
	if ( ++p == pe )
		goto _test_eof448;
case 448:
#line 10525 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 45 )
		goto tr634;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr635;
	goto tr633;
tr634:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st449;
st449:
	if ( ++p == pe )
		goto _test_eof449;
case 449:
#line 10541 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr635;
	goto tr633;
tr635:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st450;
st450:
	if ( ++p == pe )
		goto _test_eof450;
case 450:
#line 10555 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 44: goto tr632;
		case 59: goto tr593;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr635;
	goto tr633;
tr626:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st451;
st451:
	if ( ++p == pe )
		goto _test_eof451;
case 451:
#line 10575 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 61 )
		goto tr636;
	if ( (*p) > 58 ) {
		if ( 60 <= (*p) && (*p) <= 126 )
			goto tr590;
	} else if ( (*p) >= 33 )
		goto tr590;
	goto tr574;
tr636:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st452;
st452:
	if ( ++p == pe )
		goto _test_eof452;
case 452:
#line 10594 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 45: goto tr638;
		case 48: goto tr639;
	}
	if ( 49 <= (*p) && (*p) <= 57 )
		goto tr640;
	goto tr637;
tr638:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st453;
st453:
	if ( ++p == pe )
		goto _test_eof453;
case 453:
#line 10612 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 48 )
		goto tr639;
	if ( 49 <= (*p) && (*p) <= 57 )
		goto tr640;
	goto tr637;
tr639:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st454;
st454:
	if ( ++p == pe )
		goto _test_eof454;
case 454:
#line 10628 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 44: goto tr636;
		case 46: goto tr641;
		case 59: goto tr593;
		case 69: goto tr642;
		case 101: goto tr642;
	}
	goto tr637;
tr641:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st455;
st455:
	if ( ++p == pe )
		goto _test_eof455;
case 455:
#line 10649 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr643;
	goto tr637;
tr643:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st456;
st456:
	if ( ++p == pe )
		goto _test_eof456;
case 456:
#line 10663 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 44: goto tr636;
		case 59: goto tr593;
		case 69: goto tr642;
		case 101: goto tr642;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr643;
	goto tr637;
tr642:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st457;
st457:
	if ( ++p == pe )
		goto _test_eof457;
case 457:
#line 10685 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 43: goto tr644;
		case 45: goto tr644;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr645;
	goto tr637;
tr644:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st458;
st458:
	if ( ++p == pe )
		goto _test_eof458;
case 458:
#line 10703 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr645;
	goto tr637;
tr645:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st459;
st459:
	if ( ++p == pe )
		goto _test_eof459;
case 459:
#line 10717 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 44: goto tr636;
		case 59: goto tr593;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr645;
	goto tr637;
tr640:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st460;
st460:
	if ( ++p == pe )
		goto _test_eof460;
case 460:
#line 10737 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 44: goto tr636;
		case 46: goto tr641;
		case 59: goto tr593;
		case 69: goto tr642;
		case 101: goto tr642;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr640;
	goto tr637;
tr627:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st461;
st461:
	if ( ++p == pe )
		goto _test_eof461;
case 461:
#line 10760 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 61 )
		goto tr646;
	if ( (*p) > 58 ) {
		if ( 60 <= (*p) && (*p) <= 126 )
			goto tr590;
	} else if ( (*p) >= 33 )
		goto tr590;
	goto tr574;
tr646:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st462;
st462:
	if ( ++p == pe )
		goto _test_eof462;
case 462:
#line 10779 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 45 )
		goto tr648;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr649;
	goto tr647;
tr648:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st463;
st463:
	if ( ++p == pe )
		goto _test_eof463;
case 463:
#line 10795 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr649;
	goto tr647;
tr649:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st464;
st464:
	if ( ++p == pe )
		goto _test_eof464;
case 464:
#line 10809 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr649;
	goto tr647;
tr580:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st465;
st465:
	if ( ++p == pe )
		goto _test_eof465;
case 465:
#line 10832 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr594;
		case 81: goto tr650;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr574;
tr650:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st466;
st466:
	if ( ++p == pe )
		goto _test_eof466;
case 466:
#line 10853 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 61 )
		goto tr651;
	if ( (*p) > 58 ) {
		if ( 60 <= (*p) && (*p) <= 126 )
			goto tr590;
	} else if ( (*p) >= 33 )
		goto tr590;
	goto tr574;
tr651:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st467;
st467:
	if ( ++p == pe )
		goto _test_eof467;
case 467:
#line 10872 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 45: goto tr653;
		case 48: goto tr654;
	}
	if ( 49 <= (*p) && (*p) <= 57 )
		goto tr655;
	goto tr652;
tr653:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st468;
st468:
	if ( ++p == pe )
		goto _test_eof468;
case 468:
#line 10890 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 48 )
		goto tr654;
	if ( 49 <= (*p) && (*p) <= 57 )
		goto tr655;
	goto tr652;
tr654:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st469;
st469:
	if ( ++p == pe )
		goto _test_eof469;
case 469:
#line 10906 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 46: goto tr656;
		case 59: goto tr593;
		case 69: goto tr657;
		case 101: goto tr657;
	}
	goto tr652;
tr656:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st470;
st470:
	if ( ++p == pe )
		goto _test_eof470;
case 470:
#line 10926 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr658;
	goto tr652;
tr658:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st471;
st471:
	if ( ++p == pe )
		goto _test_eof471;
case 471:
#line 10940 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 69: goto tr657;
		case 101: goto tr657;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr658;
	goto tr652;
tr657:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st472;
st472:
	if ( ++p == pe )
		goto _test_eof472;
case 472:
#line 10961 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 43: goto tr659;
		case 45: goto tr659;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr660;
	goto tr652;
tr659:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st473;
st473:
	if ( ++p == pe )
		goto _test_eof473;
case 473:
#line 10979 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr660;
	goto tr652;
tr660:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st474;
st474:
	if ( ++p == pe )
		goto _test_eof474;
case 474:
#line 10993 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr660;
	goto tr652;
tr655:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st475;
st475:
	if ( ++p == pe )
		goto _test_eof475;
case 475:
#line 11012 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 46: goto tr656;
		case 59: goto tr593;
		case 69: goto tr657;
		case 101: goto tr657;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr655;
	goto tr652;
tr581:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st476;
st476:
	if ( ++p == pe )
		goto _test_eof476;
case 476:
#line 11038 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr594;
		case 73: goto tr661;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr574;
tr661:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st477;
st477:
	if ( ++p == pe )
		goto _test_eof477;
case 477:
#line 11059 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr594;
		case 71: goto tr662;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr574;
tr662:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st478;
st478:
	if ( ++p == pe )
		goto _test_eof478;
case 478:
#line 11080 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr594;
		case 65: goto tr663;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr574;
tr663:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st479;
st479:
	if ( ++p == pe )
		goto _test_eof479;
case 479:
#line 11101 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr594;
		case 82: goto tr664;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr574;
tr664:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st480;
st480:
	if ( ++p == pe )
		goto _test_eof480;
case 480:
#line 11122 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 61 )
		goto tr665;
	if ( (*p) > 58 ) {
		if ( 60 <= (*p) && (*p) <= 126 )
			goto tr590;
	} else if ( (*p) >= 33 )
		goto tr590;
	goto tr574;
tr665:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st481;
st481:
	if ( ++p == pe )
		goto _test_eof481;
case 481:
#line 11141 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr667;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr667;
	} else
		goto tr667;
	goto tr666;
tr667:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st482;
st482:
	if ( ++p == pe )
		goto _test_eof482;
case 482:
#line 11161 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr667;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr667;
	} else
		goto tr667;
	goto tr666;
tr582:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st483;
st483:
	if ( ++p == pe )
		goto _test_eof483;
case 483:
#line 11190 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr594;
		case 66: goto tr668;
		case 80: goto tr669;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr574;
tr668:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st484;
st484:
	if ( ++p == pe )
		goto _test_eof484;
case 484:
#line 11212 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr671;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr670;
tr671:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st485;
st485:
	if ( ++p == pe )
		goto _test_eof485;
case 485:
#line 11232 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( 48 <= (*p) && (*p) <= 49 )
		goto tr673;
	goto tr672;
tr673:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st486;
st486:
	if ( ++p == pe )
		goto _test_eof486;
case 486:
#line 11246 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
	}
	goto tr672;
tr669:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st487;
st487:
	if ( ++p == pe )
		goto _test_eof487;
case 487:
#line 11263 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 61 )
		goto tr674;
	if ( (*p) > 58 ) {
		if ( 60 <= (*p) && (*p) <= 126 )
			goto tr590;
	} else if ( (*p) >= 33 )
		goto tr590;
	goto tr574;
tr674:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st488;
st488:
	if ( ++p == pe )
		goto _test_eof488;
case 488:
#line 11282 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 45 )
		goto tr676;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr677;
	goto tr675;
tr676:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st489;
st489:
	if ( ++p == pe )
		goto _test_eof489;
case 489:
#line 11298 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr677;
	goto tr675;
tr677:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st490;
st490:
	if ( ++p == pe )
		goto _test_eof490;
case 490:
#line 11312 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr677;
	goto tr675;
tr583:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st491;
st491:
	if ( ++p == pe )
		goto _test_eof491;
case 491:
#line 11335 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr594;
		case 78: goto tr678;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr574;
tr678:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st492;
st492:
	if ( ++p == pe )
		goto _test_eof492;
case 492:
#line 11356 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr594;
		case 68: goto tr679;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr574;
tr679:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st493;
st493:
	if ( ++p == pe )
		goto _test_eof493;
case 493:
#line 11377 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 61 )
		goto tr680;
	if ( (*p) > 58 ) {
		if ( 60 <= (*p) && (*p) <= 126 )
			goto tr590;
	} else if ( (*p) >= 33 )
		goto tr590;
	goto tr574;
tr680:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st494;
st494:
	if ( ++p == pe )
		goto _test_eof494;
case 494:
#line 11396 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 45 )
		goto tr682;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr683;
	goto tr681;
tr682:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st495;
st495:
	if ( ++p == pe )
		goto _test_eof495;
case 495:
#line 11412 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr683;
	goto tr681;
tr683:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st496;
st496:
	if ( ++p == pe )
		goto _test_eof496;
case 496:
#line 11426 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr683;
	goto tr681;
tr584:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st497;
st497:
	if ( ++p == pe )
		goto _test_eof497;
case 497:
#line 11449 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 50: goto tr684;
		case 51: goto tr685;
		case 59: goto tr593;
		case 61: goto tr594;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr574;
tr684:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st498;
st498:
	if ( ++p == pe )
		goto _test_eof498;
case 498:
#line 11471 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr687;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr686;
tr687:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st499;
st499:
	if ( ++p == pe )
		goto _test_eof499;
case 499:
#line 11491 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( 48 <= (*p) && (*p) <= 49 )
		goto tr689;
	goto tr688;
tr689:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st500;
st500:
	if ( ++p == pe )
		goto _test_eof500;
case 500:
#line 11505 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
	}
	goto tr688;
tr685:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st501;
st501:
	if ( ++p == pe )
		goto _test_eof501;
case 501:
#line 11522 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr691;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr690;
tr691:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st502;
st502:
	if ( ++p == pe )
		goto _test_eof502;
case 502:
#line 11542 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( 48 <= (*p) && (*p) <= 49 )
		goto tr693;
	goto tr692;
tr693:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st503;
st503:
	if ( ++p == pe )
		goto _test_eof503;
case 503:
#line 11556 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
	}
	goto tr692;
tr585:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st504;
st504:
	if ( ++p == pe )
		goto _test_eof504;
case 504:
#line 11577 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr594;
		case 81: goto tr694;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr574;
tr694:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st505;
st505:
	if ( ++p == pe )
		goto _test_eof505;
case 505:
#line 11598 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 48: goto tr695;
		case 61: goto tr696;
	}
	if ( (*p) > 58 ) {
		if ( 60 <= (*p) && (*p) <= 126 )
			goto tr590;
	} else if ( (*p) >= 33 )
		goto tr590;
	goto tr574;
tr695:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st506;
st506:
	if ( ++p == pe )
		goto _test_eof506;
case 506:
#line 11619 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 61 )
		goto tr697;
	if ( (*p) > 58 ) {
		if ( 60 <= (*p) && (*p) <= 126 )
			goto tr590;
	} else if ( (*p) >= 33 )
		goto tr590;
	goto tr574;
tr697:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st507;
st507:
	if ( ++p == pe )
		goto _test_eof507;
case 507:
#line 11638 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 45 )
		goto tr699;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr700;
	goto tr698;
tr699:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st508;
st508:
	if ( ++p == pe )
		goto _test_eof508;
case 508:
#line 11654 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr700;
	goto tr698;
tr700:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st509;
st509:
	if ( ++p == pe )
		goto _test_eof509;
case 509:
#line 11668 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr700;
	goto tr698;
tr696:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st510;
st510:
	if ( ++p == pe )
		goto _test_eof510;
case 510:
#line 11687 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 45: goto tr702;
		case 48: goto tr703;
	}
	if ( 49 <= (*p) && (*p) <= 57 )
		goto tr704;
	goto tr701;
tr702:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st511;
st511:
	if ( ++p == pe )
		goto _test_eof511;
case 511:
#line 11705 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 48 )
		goto tr703;
	if ( 49 <= (*p) && (*p) <= 57 )
		goto tr704;
	goto tr701;
tr703:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st512;
st512:
	if ( ++p == pe )
		goto _test_eof512;
case 512:
#line 11721 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 46: goto tr705;
		case 59: goto tr593;
		case 69: goto tr706;
		case 101: goto tr706;
	}
	goto tr701;
tr705:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st513;
st513:
	if ( ++p == pe )
		goto _test_eof513;
case 513:
#line 11741 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr707;
	goto tr701;
tr707:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st514;
st514:
	if ( ++p == pe )
		goto _test_eof514;
case 514:
#line 11755 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 69: goto tr706;
		case 101: goto tr706;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr707;
	goto tr701;
tr706:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st515;
st515:
	if ( ++p == pe )
		goto _test_eof515;
case 515:
#line 11776 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 43: goto tr708;
		case 45: goto tr708;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr709;
	goto tr701;
tr708:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st516;
st516:
	if ( ++p == pe )
		goto _test_eof516;
case 516:
#line 11794 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr709;
	goto tr701;
tr709:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st517;
st517:
	if ( ++p == pe )
		goto _test_eof517;
case 517:
#line 11808 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr709;
	goto tr701;
tr704:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st518;
st518:
	if ( ++p == pe )
		goto _test_eof518;
case 518:
#line 11827 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 46: goto tr705;
		case 59: goto tr593;
		case 69: goto tr706;
		case 101: goto tr706;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr704;
	goto tr701;
tr586:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st519;
st519:
	if ( ++p == pe )
		goto _test_eof519;
case 519:
#line 11853 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr594;
		case 83: goto tr710;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr574;
tr710:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st520;
st520:
	if ( ++p == pe )
		goto _test_eof520;
case 520:
#line 11874 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 61 )
		goto tr711;
	if ( (*p) > 58 ) {
		if ( 60 <= (*p) && (*p) <= 126 )
			goto tr590;
	} else if ( (*p) >= 33 )
		goto tr590;
	goto tr574;
tr711:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st521;
st521:
	if ( ++p == pe )
		goto _test_eof521;
case 521:
#line 11893 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 45 )
		goto tr713;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr714;
	goto tr712;
tr713:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st522;
st522:
	if ( ++p == pe )
		goto _test_eof522;
case 522:
#line 11909 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr714;
	goto tr712;
tr714:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st523;
st523:
	if ( ++p == pe )
		goto _test_eof523;
case 523:
#line 11923 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr714;
	goto tr712;
tr587:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st524;
st524:
	if ( ++p == pe )
		goto _test_eof524;
case 524:
#line 11946 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr594;
		case 66: goto tr715;
		case 79: goto tr716;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr574;
tr715:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st525;
st525:
	if ( ++p == pe )
		goto _test_eof525;
case 525:
#line 11968 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 61 )
		goto tr717;
	if ( (*p) > 58 ) {
		if ( 60 <= (*p) && (*p) <= 126 )
			goto tr590;
	} else if ( (*p) >= 33 )
		goto tr590;
	goto tr574;
tr717:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st526;
st526:
	if ( ++p == pe )
		goto _test_eof526;
case 526:
#line 11987 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 45: goto tr719;
		case 48: goto tr720;
	}
	if ( 49 <= (*p) && (*p) <= 57 )
		goto tr721;
	goto tr718;
tr719:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st527;
st527:
	if ( ++p == pe )
		goto _test_eof527;
case 527:
#line 12005 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 48 )
		goto tr720;
	if ( 49 <= (*p) && (*p) <= 57 )
		goto tr721;
	goto tr718;
tr720:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st528;
st528:
	if ( ++p == pe )
		goto _test_eof528;
case 528:
#line 12021 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 46: goto tr722;
		case 59: goto tr593;
		case 69: goto tr723;
		case 101: goto tr723;
	}
	goto tr718;
tr722:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st529;
st529:
	if ( ++p == pe )
		goto _test_eof529;
case 529:
#line 12041 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr724;
	goto tr718;
tr724:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st530;
st530:
	if ( ++p == pe )
		goto _test_eof530;
case 530:
#line 12055 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 69: goto tr723;
		case 101: goto tr723;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr724;
	goto tr718;
tr723:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st531;
st531:
	if ( ++p == pe )
		goto _test_eof531;
case 531:
#line 12076 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 43: goto tr725;
		case 45: goto tr725;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr726;
	goto tr718;
tr725:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st532;
st532:
	if ( ++p == pe )
		goto _test_eof532;
case 532:
#line 12094 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr726;
	goto tr718;
tr726:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st533;
st533:
	if ( ++p == pe )
		goto _test_eof533;
case 533:
#line 12108 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr726;
	goto tr718;
tr721:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st534;
st534:
	if ( ++p == pe )
		goto _test_eof534;
case 534:
#line 12127 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 46: goto tr722;
		case 59: goto tr593;
		case 69: goto tr723;
		case 101: goto tr723;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr721;
	goto tr718;
tr716:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st535;
st535:
	if ( ++p == pe )
		goto _test_eof535;
case 535:
#line 12149 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr594;
		case 77: goto tr727;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr574;
tr727:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st536;
st536:
	if ( ++p == pe )
		goto _test_eof536;
case 536:
#line 12170 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr594;
		case 65: goto tr728;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr574;
tr728:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st537;
st537:
	if ( ++p == pe )
		goto _test_eof537;
case 537:
#line 12191 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr594;
		case 84: goto tr729;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr574;
tr729:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st538;
st538:
	if ( ++p == pe )
		goto _test_eof538;
case 538:
#line 12212 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr594;
		case 73: goto tr730;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr574;
tr730:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st539;
st539:
	if ( ++p == pe )
		goto _test_eof539;
case 539:
#line 12233 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr594;
		case 67: goto tr731;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr574;
tr731:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st540;
st540:
	if ( ++p == pe )
		goto _test_eof540;
case 540:
#line 12254 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr733;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr732;
tr733:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st541;
st541:
	if ( ++p == pe )
		goto _test_eof541;
case 541:
#line 12274 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( 48 <= (*p) && (*p) <= 49 )
		goto tr735;
	goto tr734;
tr735:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st542;
st542:
	if ( ++p == pe )
		goto _test_eof542;
case 542:
#line 12288 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
	}
	goto tr734;
tr588:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st543;
st543:
	if ( ++p == pe )
		goto _test_eof543;
case 543:
#line 12309 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr594;
		case 65: goto tr736;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr574;
tr736:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st544;
st544:
	if ( ++p == pe )
		goto _test_eof544;
case 544:
#line 12330 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr594;
		case 76: goto tr737;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr574;
tr737:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st545;
st545:
	if ( ++p == pe )
		goto _test_eof545;
case 545:
#line 12351 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr594;
		case 73: goto tr738;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr574;
tr738:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st546;
st546:
	if ( ++p == pe )
		goto _test_eof546;
case 546:
#line 12372 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr594;
		case 68: goto tr739;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr574;
tr739:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st547;
st547:
	if ( ++p == pe )
		goto _test_eof547;
case 547:
#line 12393 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr594;
		case 65: goto tr740;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr574;
tr740:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st548;
st548:
	if ( ++p == pe )
		goto _test_eof548;
case 548:
#line 12414 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr594;
		case 84: goto tr741;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr574;
tr741:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st549;
st549:
	if ( ++p == pe )
		goto _test_eof549;
case 549:
#line 12435 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr594;
		case 69: goto tr742;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr574;
tr742:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st550;
st550:
	if ( ++p == pe )
		goto _test_eof550;
case 550:
#line 12456 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr594;
		case 68: goto tr743;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr574;
tr743:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st551;
st551:
	if ( ++p == pe )
		goto _test_eof551;
case 551:
#line 12477 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
		case 61: goto tr745;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr590;
	goto tr744;
tr745:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st552;
st552:
	if ( ++p == pe )
		goto _test_eof552;
case 552:
#line 12497 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( 48 <= (*p) && (*p) <= 49 )
		goto tr747;
	goto tr746;
tr747:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st553;
st553:
	if ( ++p == pe )
		goto _test_eof553;
case 553:
#line 12511 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 59: goto tr593;
	}
	goto tr746;
tr576:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st554;
st554:
	if ( ++p == pe )
		goto _test_eof554;
case 554:
#line 12532 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr591;
		case 10: goto tr592;
		case 58: goto tr589;
		case 60: goto tr589;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 33 <= (*p) && (*p) <= 47 )
				goto tr589;
		} else if ( (*p) > 57 ) {
			if ( 62 <= (*p) && (*p) <= 64 )
				goto tr589;
		} else
			goto tr590;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr589;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr589;
		} else
			goto tr590;
	} else
		goto tr590;
	goto tr574;
tr573:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st555;
st555:
	if ( ++p == pe )
		goto _test_eof555;
case 555:
#line 12570 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 58 )
		goto tr567;
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 33 <= (*p) && (*p) <= 47 )
				goto tr567;
		} else if ( (*p) > 57 ) {
			if ( 60 <= (*p) && (*p) <= 64 )
				goto tr567;
		} else
			goto tr569;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr567;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr567;
		} else
			goto tr569;
	} else
		goto tr569;
	goto tr566;
tr568:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st556;
st556:
	if ( ++p == pe )
		goto _test_eof556;
case 556:
#line 12608 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr572;
		case 58: goto st414;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 33 <= (*p) && (*p) <= 47 )
				goto st414;
		} else if ( (*p) > 57 ) {
			if ( 60 <= (*p) && (*p) <= 64 )
				goto st414;
		} else
			goto tr571;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto st414;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto st414;
		} else
			goto tr571;
	} else
		goto tr571;
	goto tr566;
tr564:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st557;
st557:
	if ( ++p == pe )
		goto _test_eof557;
case 557:
#line 12644 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr748;
	goto tr556;
tr748:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st558;
st558:
	if ( ++p == pe )
		goto _test_eof558;
case 558:
#line 12658 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr563;
		case 69: goto tr565;
		case 101: goto tr565;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr748;
	goto tr556;
tr565:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st559;
st559:
	if ( ++p == pe )
		goto _test_eof559;
case 559:
#line 12677 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 43: goto tr749;
		case 45: goto tr749;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr750;
	goto tr556;
tr749:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st560;
st560:
	if ( ++p == pe )
		goto _test_eof560;
case 560:
#line 12695 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr750;
	goto tr556;
tr750:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st561;
st561:
	if ( ++p == pe )
		goto _test_eof561;
case 561:
#line 12709 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 9 )
		goto tr563;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr750;
	goto tr556;
tr560:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st562;
tr562:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st562;
st562:
	if ( ++p == pe )
		goto _test_eof562;
case 562:
#line 12735 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr563;
		case 46: goto tr564;
		case 69: goto tr565;
		case 101: goto tr565;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr562;
	goto tr556;
tr558:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st563;
st563:
	if ( ++p == pe )
		goto _test_eof563;
case 563:
#line 12759 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 9 )
		goto tr563;
	goto tr556;
tr555:
#line 23 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_end(*this);
    }
	goto st564;
st564:
	if ( ++p == pe )
		goto _test_eof564;
case 564:
#line 12773 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 42: goto tr548;
		case 46: goto tr751;
		case 60: goto tr550;
		case 65: goto tr551;
		case 67: goto tr551;
		case 71: goto tr551;
		case 78: goto tr551;
		case 84: goto tr551;
		case 91: goto tr552;
		case 93: goto tr553;
		case 97: goto tr551;
		case 99: goto tr551;
		case 103: goto tr551;
		case 110: goto tr551;
		case 116: goto tr551;
	}
	goto tr547;
tr751:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st565;
tr788:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st565;
st565:
	if ( ++p == pe )
		goto _test_eof565;
case 565:
#line 12812 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 65: goto tr752;
		case 67: goto tr752;
		case 71: goto tr752;
		case 78: goto tr752;
		case 84: goto tr752;
		case 97: goto tr752;
		case 99: goto tr752;
		case 103: goto tr752;
		case 110: goto tr752;
		case 116: goto tr752;
	}
	goto tr547;
tr752:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st566;
st566:
	if ( ++p == pe )
		goto _test_eof566;
case 566:
#line 12836 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr554;
		case 44: goto tr555;
		case 65: goto tr752;
		case 67: goto tr752;
		case 71: goto tr752;
		case 78: goto tr752;
		case 84: goto tr752;
		case 97: goto tr752;
		case 99: goto tr752;
		case 103: goto tr752;
		case 110: goto tr752;
		case 116: goto tr752;
	}
	goto tr547;
tr550:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st567;
tr754:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st567;
st567:
	if ( ++p == pe )
		goto _test_eof567;
case 567:
#line 12872 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 58: goto tr754;
		case 95: goto tr754;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr753;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr753;
	} else
		goto tr753;
	goto tr547;
tr753:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st568;
st568:
	if ( ++p == pe )
		goto _test_eof568;
case 568:
#line 12896 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 62: goto tr755;
		case 95: goto tr753;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 58 )
			goto tr753;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr753;
	} else
		goto tr753;
	goto tr547;
tr551:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st569;
tr756:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st569;
st569:
	if ( ++p == pe )
		goto _test_eof569;
case 569:
#line 12930 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr554;
		case 44: goto tr555;
		case 46: goto tr755;
		case 65: goto tr756;
		case 67: goto tr756;
		case 71: goto tr756;
		case 78: goto tr756;
		case 84: goto tr756;
		case 91: goto tr757;
		case 93: goto tr758;
		case 97: goto tr756;
		case 99: goto tr756;
		case 103: goto tr756;
		case 110: goto tr756;
		case 116: goto tr756;
	}
	goto tr547;
tr757:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st570;
st570:
	if ( ++p == pe )
		goto _test_eof570;
case 570:
#line 12959 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 60 )
		goto tr760;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr759;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr759;
	} else
		goto tr759;
	goto tr547;
tr759:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st571;
st571:
	if ( ++p == pe )
		goto _test_eof571;
case 571:
#line 12981 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 58: goto tr763;
		case 59: goto tr761;
		case 61: goto tr761;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 33 <= (*p) && (*p) <= 47 )
				goto tr761;
		} else if ( (*p) > 57 ) {
			if ( 63 <= (*p) && (*p) <= 64 )
				goto tr761;
		} else
			goto tr762;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr761;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr761;
		} else
			goto tr762;
	} else
		goto tr762;
	goto tr547;
tr761:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st572;
st572:
	if ( ++p == pe )
		goto _test_eof572;
case 572:
#line 13018 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 59: goto tr761;
		case 61: goto tr761;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 33 <= (*p) && (*p) <= 47 )
				goto tr761;
		} else if ( (*p) > 57 ) {
			if ( 63 <= (*p) && (*p) <= 64 )
				goto tr761;
		} else
			goto tr762;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr761;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr761;
		} else
			goto tr762;
	} else
		goto tr762;
	goto tr547;
tr762:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st573;
st573:
	if ( ++p == pe )
		goto _test_eof573;
case 573:
#line 13054 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 58: goto tr763;
		case 61: goto tr762;
	}
	if ( (*p) > 59 ) {
		if ( 63 <= (*p) && (*p) <= 126 )
			goto tr762;
	} else if ( (*p) >= 33 )
		goto tr762;
	goto tr547;
tr763:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st574;
st574:
	if ( ++p == pe )
		goto _test_eof574;
case 574:
#line 13075 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 45 )
		goto tr764;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr765;
	goto tr547;
tr764:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st575;
st575:
	if ( ++p == pe )
		goto _test_eof575;
case 575:
#line 13091 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr765;
	goto tr547;
tr765:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st576;
st576:
	if ( ++p == pe )
		goto _test_eof576;
case 576:
#line 13105 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 91 )
		goto tr755;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr765;
	goto tr547;
tr760:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st577;
st577:
	if ( ++p == pe )
		goto _test_eof577;
case 577:
#line 13121 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr766;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr766;
	} else
		goto tr766;
	goto tr547;
tr766:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st578;
st578:
	if ( ++p == pe )
		goto _test_eof578;
case 578:
#line 13141 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 59: goto tr767;
		case 62: goto tr769;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 33 <= (*p) && (*p) <= 47 )
				goto tr767;
		} else if ( (*p) > 57 ) {
			if ( 61 <= (*p) && (*p) <= 64 )
				goto tr767;
		} else
			goto tr768;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr767;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr767;
		} else
			goto tr768;
	} else
		goto tr768;
	goto tr547;
tr767:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st579;
st579:
	if ( ++p == pe )
		goto _test_eof579;
case 579:
#line 13177 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 59: goto tr767;
		case 61: goto tr767;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 33 <= (*p) && (*p) <= 47 )
				goto tr767;
		} else if ( (*p) > 57 ) {
			if ( 63 <= (*p) && (*p) <= 64 )
				goto tr767;
		} else
			goto tr768;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr767;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr767;
		} else
			goto tr768;
	} else
		goto tr768;
	goto tr547;
tr768:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st580;
st580:
	if ( ++p == pe )
		goto _test_eof580;
case 580:
#line 13213 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 59: goto tr768;
		case 62: goto tr769;
	}
	if ( (*p) > 57 ) {
		if ( 61 <= (*p) && (*p) <= 126 )
			goto tr768;
	} else if ( (*p) >= 33 )
		goto tr768;
	goto tr547;
tr769:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st581;
st581:
	if ( ++p == pe )
		goto _test_eof581;
case 581:
#line 13234 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 58 )
		goto tr763;
	goto tr547;
tr758:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st582;
st582:
	if ( ++p == pe )
		goto _test_eof582;
case 582:
#line 13248 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 60 )
		goto tr771;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr770;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr770;
	} else
		goto tr770;
	goto tr547;
tr770:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st583;
st583:
	if ( ++p == pe )
		goto _test_eof583;
case 583:
#line 13270 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 58: goto tr774;
		case 59: goto tr772;
		case 61: goto tr772;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 33 <= (*p) && (*p) <= 47 )
				goto tr772;
		} else if ( (*p) > 57 ) {
			if ( 63 <= (*p) && (*p) <= 64 )
				goto tr772;
		} else
			goto tr773;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr772;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr772;
		} else
			goto tr773;
	} else
		goto tr773;
	goto tr547;
tr772:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st584;
st584:
	if ( ++p == pe )
		goto _test_eof584;
case 584:
#line 13307 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 59: goto tr772;
		case 61: goto tr772;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 33 <= (*p) && (*p) <= 47 )
				goto tr772;
		} else if ( (*p) > 57 ) {
			if ( 63 <= (*p) && (*p) <= 64 )
				goto tr772;
		} else
			goto tr773;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr772;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr772;
		} else
			goto tr773;
	} else
		goto tr773;
	goto tr547;
tr773:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st585;
st585:
	if ( ++p == pe )
		goto _test_eof585;
case 585:
#line 13343 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 58: goto tr774;
		case 61: goto tr773;
	}
	if ( (*p) > 59 ) {
		if ( 63 <= (*p) && (*p) <= 126 )
			goto tr773;
	} else if ( (*p) >= 33 )
		goto tr773;
	goto tr547;
tr774:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st586;
st586:
	if ( ++p == pe )
		goto _test_eof586;
case 586:
#line 13364 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 45 )
		goto tr775;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr776;
	goto tr547;
tr775:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st587;
st587:
	if ( ++p == pe )
		goto _test_eof587;
case 587:
#line 13380 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr776;
	goto tr547;
tr776:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st588;
st588:
	if ( ++p == pe )
		goto _test_eof588;
case 588:
#line 13394 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 93 )
		goto tr755;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr776;
	goto tr547;
tr771:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st589;
st589:
	if ( ++p == pe )
		goto _test_eof589;
case 589:
#line 13410 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr777;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr777;
	} else
		goto tr777;
	goto tr547;
tr777:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st590;
st590:
	if ( ++p == pe )
		goto _test_eof590;
case 590:
#line 13430 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 59: goto tr778;
		case 62: goto tr780;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 33 <= (*p) && (*p) <= 47 )
				goto tr778;
		} else if ( (*p) > 57 ) {
			if ( 61 <= (*p) && (*p) <= 64 )
				goto tr778;
		} else
			goto tr779;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr778;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr778;
		} else
			goto tr779;
	} else
		goto tr779;
	goto tr547;
tr778:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st591;
st591:
	if ( ++p == pe )
		goto _test_eof591;
case 591:
#line 13466 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 59: goto tr778;
		case 61: goto tr778;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 33 <= (*p) && (*p) <= 47 )
				goto tr778;
		} else if ( (*p) > 57 ) {
			if ( 63 <= (*p) && (*p) <= 64 )
				goto tr778;
		} else
			goto tr779;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr778;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr778;
		} else
			goto tr779;
	} else
		goto tr779;
	goto tr547;
tr779:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st592;
st592:
	if ( ++p == pe )
		goto _test_eof592;
case 592:
#line 13502 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 59: goto tr779;
		case 62: goto tr780;
	}
	if ( (*p) > 57 ) {
		if ( 61 <= (*p) && (*p) <= 126 )
			goto tr779;
	} else if ( (*p) >= 33 )
		goto tr779;
	goto tr547;
tr780:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st593;
st593:
	if ( ++p == pe )
		goto _test_eof593;
case 593:
#line 13523 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 58 )
		goto tr774;
	goto tr547;
tr552:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st594;
st594:
	if ( ++p == pe )
		goto _test_eof594;
case 594:
#line 13541 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 60 )
		goto tr782;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr781;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr781;
	} else
		goto tr781;
	goto tr547;
tr781:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st595;
st595:
	if ( ++p == pe )
		goto _test_eof595;
case 595:
#line 13563 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 58: goto tr785;
		case 59: goto tr783;
		case 61: goto tr783;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 33 <= (*p) && (*p) <= 47 )
				goto tr783;
		} else if ( (*p) > 57 ) {
			if ( 63 <= (*p) && (*p) <= 64 )
				goto tr783;
		} else
			goto tr784;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr783;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr783;
		} else
			goto tr784;
	} else
		goto tr784;
	goto tr547;
tr783:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st596;
st596:
	if ( ++p == pe )
		goto _test_eof596;
case 596:
#line 13600 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 59: goto tr783;
		case 61: goto tr783;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 33 <= (*p) && (*p) <= 47 )
				goto tr783;
		} else if ( (*p) > 57 ) {
			if ( 63 <= (*p) && (*p) <= 64 )
				goto tr783;
		} else
			goto tr784;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr783;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr783;
		} else
			goto tr784;
	} else
		goto tr784;
	goto tr547;
tr784:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st597;
st597:
	if ( ++p == pe )
		goto _test_eof597;
case 597:
#line 13636 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 58: goto tr785;
		case 61: goto tr784;
	}
	if ( (*p) > 59 ) {
		if ( 63 <= (*p) && (*p) <= 126 )
			goto tr784;
	} else if ( (*p) >= 33 )
		goto tr784;
	goto tr547;
tr785:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st598;
st598:
	if ( ++p == pe )
		goto _test_eof598;
case 598:
#line 13657 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 45 )
		goto tr786;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr787;
	goto tr547;
tr786:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st599;
st599:
	if ( ++p == pe )
		goto _test_eof599;
case 599:
#line 13673 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr787;
	goto tr547;
tr787:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st600;
st600:
	if ( ++p == pe )
		goto _test_eof600;
case 600:
#line 13687 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 91 )
		goto tr788;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr787;
	goto tr547;
tr782:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st601;
st601:
	if ( ++p == pe )
		goto _test_eof601;
case 601:
#line 13703 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr789;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr789;
	} else
		goto tr789;
	goto tr547;
tr789:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st602;
st602:
	if ( ++p == pe )
		goto _test_eof602;
case 602:
#line 13723 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 59: goto tr790;
		case 62: goto tr792;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 33 <= (*p) && (*p) <= 47 )
				goto tr790;
		} else if ( (*p) > 57 ) {
			if ( 61 <= (*p) && (*p) <= 64 )
				goto tr790;
		} else
			goto tr791;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr790;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr790;
		} else
			goto tr791;
	} else
		goto tr791;
	goto tr547;
tr790:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st603;
st603:
	if ( ++p == pe )
		goto _test_eof603;
case 603:
#line 13759 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 59: goto tr790;
		case 61: goto tr790;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 33 <= (*p) && (*p) <= 47 )
				goto tr790;
		} else if ( (*p) > 57 ) {
			if ( 63 <= (*p) && (*p) <= 64 )
				goto tr790;
		} else
			goto tr791;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr790;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr790;
		} else
			goto tr791;
	} else
		goto tr791;
	goto tr547;
tr791:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st604;
st604:
	if ( ++p == pe )
		goto _test_eof604;
case 604:
#line 13795 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 59: goto tr791;
		case 62: goto tr792;
	}
	if ( (*p) > 57 ) {
		if ( 61 <= (*p) && (*p) <= 126 )
			goto tr791;
	} else if ( (*p) >= 33 )
		goto tr791;
	goto tr547;
tr792:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st605;
st605:
	if ( ++p == pe )
		goto _test_eof605;
case 605:
#line 13816 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 58 )
		goto tr785;
	goto tr547;
tr553:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st606;
st606:
	if ( ++p == pe )
		goto _test_eof606;
case 606:
#line 13834 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 60 )
		goto tr794;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr793;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr793;
	} else
		goto tr793;
	goto tr547;
tr793:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st607;
st607:
	if ( ++p == pe )
		goto _test_eof607;
case 607:
#line 13856 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 58: goto tr797;
		case 59: goto tr795;
		case 61: goto tr795;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 33 <= (*p) && (*p) <= 47 )
				goto tr795;
		} else if ( (*p) > 57 ) {
			if ( 63 <= (*p) && (*p) <= 64 )
				goto tr795;
		} else
			goto tr796;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr795;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr795;
		} else
			goto tr796;
	} else
		goto tr796;
	goto tr547;
tr795:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st608;
st608:
	if ( ++p == pe )
		goto _test_eof608;
case 608:
#line 13893 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 59: goto tr795;
		case 61: goto tr795;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 33 <= (*p) && (*p) <= 47 )
				goto tr795;
		} else if ( (*p) > 57 ) {
			if ( 63 <= (*p) && (*p) <= 64 )
				goto tr795;
		} else
			goto tr796;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr795;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr795;
		} else
			goto tr796;
	} else
		goto tr796;
	goto tr547;
tr796:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st609;
st609:
	if ( ++p == pe )
		goto _test_eof609;
case 609:
#line 13929 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 58: goto tr797;
		case 61: goto tr796;
	}
	if ( (*p) > 59 ) {
		if ( 63 <= (*p) && (*p) <= 126 )
			goto tr796;
	} else if ( (*p) >= 33 )
		goto tr796;
	goto tr547;
tr797:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st610;
st610:
	if ( ++p == pe )
		goto _test_eof610;
case 610:
#line 13950 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 45 )
		goto tr798;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr799;
	goto tr547;
tr798:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st611;
st611:
	if ( ++p == pe )
		goto _test_eof611;
case 611:
#line 13966 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr799;
	goto tr547;
tr799:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st612;
st612:
	if ( ++p == pe )
		goto _test_eof612;
case 612:
#line 13980 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 93 )
		goto tr788;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr799;
	goto tr547;
tr794:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st613;
st613:
	if ( ++p == pe )
		goto _test_eof613;
case 613:
#line 13996 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr800;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr800;
	} else
		goto tr800;
	goto tr547;
tr800:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st614;
st614:
	if ( ++p == pe )
		goto _test_eof614;
case 614:
#line 14016 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 59: goto tr801;
		case 62: goto tr803;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 33 <= (*p) && (*p) <= 47 )
				goto tr801;
		} else if ( (*p) > 57 ) {
			if ( 61 <= (*p) && (*p) <= 64 )
				goto tr801;
		} else
			goto tr802;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr801;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr801;
		} else
			goto tr802;
	} else
		goto tr802;
	goto tr547;
tr801:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st615;
st615:
	if ( ++p == pe )
		goto _test_eof615;
case 615:
#line 14052 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 59: goto tr801;
		case 61: goto tr801;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 33 <= (*p) && (*p) <= 47 )
				goto tr801;
		} else if ( (*p) > 57 ) {
			if ( 63 <= (*p) && (*p) <= 64 )
				goto tr801;
		} else
			goto tr802;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr801;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr801;
		} else
			goto tr802;
	} else
		goto tr802;
	goto tr547;
tr802:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st616;
st616:
	if ( ++p == pe )
		goto _test_eof616;
case 616:
#line 14088 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 59: goto tr802;
		case 62: goto tr803;
	}
	if ( (*p) > 57 ) {
		if ( 61 <= (*p) && (*p) <= 126 )
			goto tr802;
	} else if ( (*p) >= 33 )
		goto tr802;
	goto tr547;
tr803:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st617;
st617:
	if ( ++p == pe )
		goto _test_eof617;
case 617:
#line 14109 "cpp/src/bioformats/vcf/validator_detail.hpp"
	if ( (*p) == 58 )
		goto tr797;
	goto tr547;
tr549:
#line 15 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st618;
st618:
	if ( ++p == pe )
		goto _test_eof618;
case 618:
#line 14127 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr554;
		case 65: goto tr752;
		case 67: goto tr752;
		case 71: goto tr752;
		case 78: goto tr752;
		case 84: goto tr752;
		case 97: goto tr752;
		case 99: goto tr752;
		case 103: goto tr752;
		case 110: goto tr752;
		case 116: goto tr752;
	}
	goto tr547;
tr531:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st619;
st619:
	if ( ++p == pe )
		goto _test_eof619;
case 619:
#line 14152 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 59: goto tr531;
		case 61: goto tr531;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 33 <= (*p) && (*p) <= 47 )
				goto tr531;
		} else if ( (*p) > 57 ) {
			if ( 63 <= (*p) && (*p) <= 64 )
				goto tr531;
		} else
			goto tr532;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr531;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr531;
		} else
			goto tr532;
	} else
		goto tr532;
	goto tr529;
tr532:
#line 19 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_token_char(*this, *p);
    }
	goto st620;
st620:
	if ( ++p == pe )
		goto _test_eof620;
case 620:
#line 14188 "cpp/src/bioformats/vcf/validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr530;
		case 59: goto tr532;
		case 61: goto tr532;
	}
	if ( (*p) > 57 ) {
		if ( 63 <= (*p) && (*p) <= 126 )
			goto tr532;
	} else if ( (*p) >= 33 )
		goto tr532;
	goto tr529;
st621:
	if ( ++p == pe )
		goto _test_eof621;
case 621:
	if ( (*p) == 10 )
		goto tr805;
	goto st621;
tr805:
#line 27 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_newline(*this);
        ++n_lines;
        n_columns = 1;

        if (n_lines % 10000 == 0) {
            std::cout << "Lines read: " << n_lines << std::endl;
        }
    }
#line 710 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{ {goto st20;} }
	goto st625;
st625:
	if ( ++p == pe )
		goto _test_eof625;
case 625:
#line 14225 "cpp/src/bioformats/vcf/validator_detail.hpp"
	goto st0;
st622:
	if ( ++p == pe )
		goto _test_eof622;
case 622:
	if ( (*p) == 10 )
		goto tr807;
	goto st622;
tr807:
#line 27 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ParsePolicy::handle_newline(*this);
        ++n_lines;
        n_columns = 1;

        if (n_lines % 10000 == 0) {
            std::cout << "Lines read: " << n_lines << std::endl;
        }
    }
#line 711 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{ {goto st624;} }
	goto st626;
st626:
	if ( ++p == pe )
		goto _test_eof626;
case 626:
#line 14252 "cpp/src/bioformats/vcf/validator_detail.hpp"
	goto st0;
	}
	_test_eof2: cs = 2; goto _test_eof; 
	_test_eof3: cs = 3; goto _test_eof; 
	_test_eof4: cs = 4; goto _test_eof; 
	_test_eof5: cs = 5; goto _test_eof; 
	_test_eof6: cs = 6; goto _test_eof; 
	_test_eof7: cs = 7; goto _test_eof; 
	_test_eof8: cs = 8; goto _test_eof; 
	_test_eof9: cs = 9; goto _test_eof; 
	_test_eof10: cs = 10; goto _test_eof; 
	_test_eof11: cs = 11; goto _test_eof; 
	_test_eof12: cs = 12; goto _test_eof; 
	_test_eof13: cs = 13; goto _test_eof; 
	_test_eof14: cs = 14; goto _test_eof; 
	_test_eof15: cs = 15; goto _test_eof; 
	_test_eof16: cs = 16; goto _test_eof; 
	_test_eof17: cs = 17; goto _test_eof; 
	_test_eof18: cs = 18; goto _test_eof; 
	_test_eof19: cs = 19; goto _test_eof; 
	_test_eof20: cs = 20; goto _test_eof; 
	_test_eof21: cs = 21; goto _test_eof; 
	_test_eof22: cs = 22; goto _test_eof; 
	_test_eof23: cs = 23; goto _test_eof; 
	_test_eof24: cs = 24; goto _test_eof; 
	_test_eof25: cs = 25; goto _test_eof; 
	_test_eof26: cs = 26; goto _test_eof; 
	_test_eof27: cs = 27; goto _test_eof; 
	_test_eof28: cs = 28; goto _test_eof; 
	_test_eof29: cs = 29; goto _test_eof; 
	_test_eof30: cs = 30; goto _test_eof; 
	_test_eof31: cs = 31; goto _test_eof; 
	_test_eof32: cs = 32; goto _test_eof; 
	_test_eof33: cs = 33; goto _test_eof; 
	_test_eof34: cs = 34; goto _test_eof; 
	_test_eof35: cs = 35; goto _test_eof; 
	_test_eof36: cs = 36; goto _test_eof; 
	_test_eof37: cs = 37; goto _test_eof; 
	_test_eof38: cs = 38; goto _test_eof; 
	_test_eof39: cs = 39; goto _test_eof; 
	_test_eof40: cs = 40; goto _test_eof; 
	_test_eof41: cs = 41; goto _test_eof; 
	_test_eof42: cs = 42; goto _test_eof; 
	_test_eof43: cs = 43; goto _test_eof; 
	_test_eof44: cs = 44; goto _test_eof; 
	_test_eof45: cs = 45; goto _test_eof; 
	_test_eof46: cs = 46; goto _test_eof; 
	_test_eof47: cs = 47; goto _test_eof; 
	_test_eof48: cs = 48; goto _test_eof; 
	_test_eof49: cs = 49; goto _test_eof; 
	_test_eof50: cs = 50; goto _test_eof; 
	_test_eof51: cs = 51; goto _test_eof; 
	_test_eof52: cs = 52; goto _test_eof; 
	_test_eof53: cs = 53; goto _test_eof; 
	_test_eof54: cs = 54; goto _test_eof; 
	_test_eof55: cs = 55; goto _test_eof; 
	_test_eof56: cs = 56; goto _test_eof; 
	_test_eof57: cs = 57; goto _test_eof; 
	_test_eof58: cs = 58; goto _test_eof; 
	_test_eof59: cs = 59; goto _test_eof; 
	_test_eof60: cs = 60; goto _test_eof; 
	_test_eof61: cs = 61; goto _test_eof; 
	_test_eof62: cs = 62; goto _test_eof; 
	_test_eof63: cs = 63; goto _test_eof; 
	_test_eof64: cs = 64; goto _test_eof; 
	_test_eof65: cs = 65; goto _test_eof; 
	_test_eof66: cs = 66; goto _test_eof; 
	_test_eof67: cs = 67; goto _test_eof; 
	_test_eof68: cs = 68; goto _test_eof; 
	_test_eof69: cs = 69; goto _test_eof; 
	_test_eof70: cs = 70; goto _test_eof; 
	_test_eof71: cs = 71; goto _test_eof; 
	_test_eof72: cs = 72; goto _test_eof; 
	_test_eof73: cs = 73; goto _test_eof; 
	_test_eof74: cs = 74; goto _test_eof; 
	_test_eof75: cs = 75; goto _test_eof; 
	_test_eof76: cs = 76; goto _test_eof; 
	_test_eof77: cs = 77; goto _test_eof; 
	_test_eof78: cs = 78; goto _test_eof; 
	_test_eof79: cs = 79; goto _test_eof; 
	_test_eof80: cs = 80; goto _test_eof; 
	_test_eof81: cs = 81; goto _test_eof; 
	_test_eof82: cs = 82; goto _test_eof; 
	_test_eof83: cs = 83; goto _test_eof; 
	_test_eof84: cs = 84; goto _test_eof; 
	_test_eof85: cs = 85; goto _test_eof; 
	_test_eof86: cs = 86; goto _test_eof; 
	_test_eof87: cs = 87; goto _test_eof; 
	_test_eof88: cs = 88; goto _test_eof; 
	_test_eof89: cs = 89; goto _test_eof; 
	_test_eof90: cs = 90; goto _test_eof; 
	_test_eof91: cs = 91; goto _test_eof; 
	_test_eof92: cs = 92; goto _test_eof; 
	_test_eof93: cs = 93; goto _test_eof; 
	_test_eof94: cs = 94; goto _test_eof; 
	_test_eof95: cs = 95; goto _test_eof; 
	_test_eof96: cs = 96; goto _test_eof; 
	_test_eof97: cs = 97; goto _test_eof; 
	_test_eof98: cs = 98; goto _test_eof; 
	_test_eof99: cs = 99; goto _test_eof; 
	_test_eof100: cs = 100; goto _test_eof; 
	_test_eof101: cs = 101; goto _test_eof; 
	_test_eof102: cs = 102; goto _test_eof; 
	_test_eof103: cs = 103; goto _test_eof; 
	_test_eof104: cs = 104; goto _test_eof; 
	_test_eof105: cs = 105; goto _test_eof; 
	_test_eof106: cs = 106; goto _test_eof; 
	_test_eof107: cs = 107; goto _test_eof; 
	_test_eof108: cs = 108; goto _test_eof; 
	_test_eof109: cs = 109; goto _test_eof; 
	_test_eof110: cs = 110; goto _test_eof; 
	_test_eof111: cs = 111; goto _test_eof; 
	_test_eof112: cs = 112; goto _test_eof; 
	_test_eof113: cs = 113; goto _test_eof; 
	_test_eof114: cs = 114; goto _test_eof; 
	_test_eof115: cs = 115; goto _test_eof; 
	_test_eof116: cs = 116; goto _test_eof; 
	_test_eof117: cs = 117; goto _test_eof; 
	_test_eof118: cs = 118; goto _test_eof; 
	_test_eof119: cs = 119; goto _test_eof; 
	_test_eof120: cs = 120; goto _test_eof; 
	_test_eof121: cs = 121; goto _test_eof; 
	_test_eof122: cs = 122; goto _test_eof; 
	_test_eof123: cs = 123; goto _test_eof; 
	_test_eof124: cs = 124; goto _test_eof; 
	_test_eof125: cs = 125; goto _test_eof; 
	_test_eof126: cs = 126; goto _test_eof; 
	_test_eof127: cs = 127; goto _test_eof; 
	_test_eof128: cs = 128; goto _test_eof; 
	_test_eof129: cs = 129; goto _test_eof; 
	_test_eof130: cs = 130; goto _test_eof; 
	_test_eof131: cs = 131; goto _test_eof; 
	_test_eof132: cs = 132; goto _test_eof; 
	_test_eof133: cs = 133; goto _test_eof; 
	_test_eof134: cs = 134; goto _test_eof; 
	_test_eof135: cs = 135; goto _test_eof; 
	_test_eof136: cs = 136; goto _test_eof; 
	_test_eof137: cs = 137; goto _test_eof; 
	_test_eof138: cs = 138; goto _test_eof; 
	_test_eof139: cs = 139; goto _test_eof; 
	_test_eof140: cs = 140; goto _test_eof; 
	_test_eof141: cs = 141; goto _test_eof; 
	_test_eof142: cs = 142; goto _test_eof; 
	_test_eof143: cs = 143; goto _test_eof; 
	_test_eof144: cs = 144; goto _test_eof; 
	_test_eof145: cs = 145; goto _test_eof; 
	_test_eof146: cs = 146; goto _test_eof; 
	_test_eof147: cs = 147; goto _test_eof; 
	_test_eof148: cs = 148; goto _test_eof; 
	_test_eof149: cs = 149; goto _test_eof; 
	_test_eof150: cs = 150; goto _test_eof; 
	_test_eof151: cs = 151; goto _test_eof; 
	_test_eof152: cs = 152; goto _test_eof; 
	_test_eof153: cs = 153; goto _test_eof; 
	_test_eof154: cs = 154; goto _test_eof; 
	_test_eof155: cs = 155; goto _test_eof; 
	_test_eof156: cs = 156; goto _test_eof; 
	_test_eof157: cs = 157; goto _test_eof; 
	_test_eof158: cs = 158; goto _test_eof; 
	_test_eof159: cs = 159; goto _test_eof; 
	_test_eof160: cs = 160; goto _test_eof; 
	_test_eof161: cs = 161; goto _test_eof; 
	_test_eof162: cs = 162; goto _test_eof; 
	_test_eof163: cs = 163; goto _test_eof; 
	_test_eof164: cs = 164; goto _test_eof; 
	_test_eof165: cs = 165; goto _test_eof; 
	_test_eof166: cs = 166; goto _test_eof; 
	_test_eof167: cs = 167; goto _test_eof; 
	_test_eof168: cs = 168; goto _test_eof; 
	_test_eof169: cs = 169; goto _test_eof; 
	_test_eof170: cs = 170; goto _test_eof; 
	_test_eof171: cs = 171; goto _test_eof; 
	_test_eof172: cs = 172; goto _test_eof; 
	_test_eof173: cs = 173; goto _test_eof; 
	_test_eof174: cs = 174; goto _test_eof; 
	_test_eof175: cs = 175; goto _test_eof; 
	_test_eof176: cs = 176; goto _test_eof; 
	_test_eof177: cs = 177; goto _test_eof; 
	_test_eof178: cs = 178; goto _test_eof; 
	_test_eof179: cs = 179; goto _test_eof; 
	_test_eof180: cs = 180; goto _test_eof; 
	_test_eof181: cs = 181; goto _test_eof; 
	_test_eof182: cs = 182; goto _test_eof; 
	_test_eof183: cs = 183; goto _test_eof; 
	_test_eof184: cs = 184; goto _test_eof; 
	_test_eof185: cs = 185; goto _test_eof; 
	_test_eof186: cs = 186; goto _test_eof; 
	_test_eof187: cs = 187; goto _test_eof; 
	_test_eof188: cs = 188; goto _test_eof; 
	_test_eof189: cs = 189; goto _test_eof; 
	_test_eof190: cs = 190; goto _test_eof; 
	_test_eof191: cs = 191; goto _test_eof; 
	_test_eof192: cs = 192; goto _test_eof; 
	_test_eof193: cs = 193; goto _test_eof; 
	_test_eof194: cs = 194; goto _test_eof; 
	_test_eof195: cs = 195; goto _test_eof; 
	_test_eof196: cs = 196; goto _test_eof; 
	_test_eof197: cs = 197; goto _test_eof; 
	_test_eof198: cs = 198; goto _test_eof; 
	_test_eof199: cs = 199; goto _test_eof; 
	_test_eof200: cs = 200; goto _test_eof; 
	_test_eof201: cs = 201; goto _test_eof; 
	_test_eof202: cs = 202; goto _test_eof; 
	_test_eof203: cs = 203; goto _test_eof; 
	_test_eof204: cs = 204; goto _test_eof; 
	_test_eof205: cs = 205; goto _test_eof; 
	_test_eof206: cs = 206; goto _test_eof; 
	_test_eof207: cs = 207; goto _test_eof; 
	_test_eof208: cs = 208; goto _test_eof; 
	_test_eof209: cs = 209; goto _test_eof; 
	_test_eof210: cs = 210; goto _test_eof; 
	_test_eof211: cs = 211; goto _test_eof; 
	_test_eof212: cs = 212; goto _test_eof; 
	_test_eof213: cs = 213; goto _test_eof; 
	_test_eof214: cs = 214; goto _test_eof; 
	_test_eof215: cs = 215; goto _test_eof; 
	_test_eof216: cs = 216; goto _test_eof; 
	_test_eof217: cs = 217; goto _test_eof; 
	_test_eof218: cs = 218; goto _test_eof; 
	_test_eof219: cs = 219; goto _test_eof; 
	_test_eof220: cs = 220; goto _test_eof; 
	_test_eof221: cs = 221; goto _test_eof; 
	_test_eof222: cs = 222; goto _test_eof; 
	_test_eof223: cs = 223; goto _test_eof; 
	_test_eof224: cs = 224; goto _test_eof; 
	_test_eof225: cs = 225; goto _test_eof; 
	_test_eof226: cs = 226; goto _test_eof; 
	_test_eof227: cs = 227; goto _test_eof; 
	_test_eof228: cs = 228; goto _test_eof; 
	_test_eof229: cs = 229; goto _test_eof; 
	_test_eof230: cs = 230; goto _test_eof; 
	_test_eof231: cs = 231; goto _test_eof; 
	_test_eof232: cs = 232; goto _test_eof; 
	_test_eof233: cs = 233; goto _test_eof; 
	_test_eof234: cs = 234; goto _test_eof; 
	_test_eof235: cs = 235; goto _test_eof; 
	_test_eof236: cs = 236; goto _test_eof; 
	_test_eof237: cs = 237; goto _test_eof; 
	_test_eof238: cs = 238; goto _test_eof; 
	_test_eof239: cs = 239; goto _test_eof; 
	_test_eof240: cs = 240; goto _test_eof; 
	_test_eof241: cs = 241; goto _test_eof; 
	_test_eof242: cs = 242; goto _test_eof; 
	_test_eof243: cs = 243; goto _test_eof; 
	_test_eof244: cs = 244; goto _test_eof; 
	_test_eof245: cs = 245; goto _test_eof; 
	_test_eof246: cs = 246; goto _test_eof; 
	_test_eof247: cs = 247; goto _test_eof; 
	_test_eof248: cs = 248; goto _test_eof; 
	_test_eof249: cs = 249; goto _test_eof; 
	_test_eof250: cs = 250; goto _test_eof; 
	_test_eof251: cs = 251; goto _test_eof; 
	_test_eof252: cs = 252; goto _test_eof; 
	_test_eof253: cs = 253; goto _test_eof; 
	_test_eof254: cs = 254; goto _test_eof; 
	_test_eof255: cs = 255; goto _test_eof; 
	_test_eof256: cs = 256; goto _test_eof; 
	_test_eof257: cs = 257; goto _test_eof; 
	_test_eof258: cs = 258; goto _test_eof; 
	_test_eof259: cs = 259; goto _test_eof; 
	_test_eof260: cs = 260; goto _test_eof; 
	_test_eof261: cs = 261; goto _test_eof; 
	_test_eof262: cs = 262; goto _test_eof; 
	_test_eof263: cs = 263; goto _test_eof; 
	_test_eof264: cs = 264; goto _test_eof; 
	_test_eof265: cs = 265; goto _test_eof; 
	_test_eof266: cs = 266; goto _test_eof; 
	_test_eof267: cs = 267; goto _test_eof; 
	_test_eof268: cs = 268; goto _test_eof; 
	_test_eof269: cs = 269; goto _test_eof; 
	_test_eof270: cs = 270; goto _test_eof; 
	_test_eof271: cs = 271; goto _test_eof; 
	_test_eof272: cs = 272; goto _test_eof; 
	_test_eof273: cs = 273; goto _test_eof; 
	_test_eof274: cs = 274; goto _test_eof; 
	_test_eof275: cs = 275; goto _test_eof; 
	_test_eof276: cs = 276; goto _test_eof; 
	_test_eof277: cs = 277; goto _test_eof; 
	_test_eof278: cs = 278; goto _test_eof; 
	_test_eof279: cs = 279; goto _test_eof; 
	_test_eof280: cs = 280; goto _test_eof; 
	_test_eof281: cs = 281; goto _test_eof; 
	_test_eof282: cs = 282; goto _test_eof; 
	_test_eof283: cs = 283; goto _test_eof; 
	_test_eof284: cs = 284; goto _test_eof; 
	_test_eof285: cs = 285; goto _test_eof; 
	_test_eof286: cs = 286; goto _test_eof; 
	_test_eof287: cs = 287; goto _test_eof; 
	_test_eof288: cs = 288; goto _test_eof; 
	_test_eof289: cs = 289; goto _test_eof; 
	_test_eof290: cs = 290; goto _test_eof; 
	_test_eof291: cs = 291; goto _test_eof; 
	_test_eof292: cs = 292; goto _test_eof; 
	_test_eof293: cs = 293; goto _test_eof; 
	_test_eof294: cs = 294; goto _test_eof; 
	_test_eof295: cs = 295; goto _test_eof; 
	_test_eof296: cs = 296; goto _test_eof; 
	_test_eof297: cs = 297; goto _test_eof; 
	_test_eof298: cs = 298; goto _test_eof; 
	_test_eof299: cs = 299; goto _test_eof; 
	_test_eof300: cs = 300; goto _test_eof; 
	_test_eof301: cs = 301; goto _test_eof; 
	_test_eof302: cs = 302; goto _test_eof; 
	_test_eof303: cs = 303; goto _test_eof; 
	_test_eof304: cs = 304; goto _test_eof; 
	_test_eof305: cs = 305; goto _test_eof; 
	_test_eof306: cs = 306; goto _test_eof; 
	_test_eof307: cs = 307; goto _test_eof; 
	_test_eof308: cs = 308; goto _test_eof; 
	_test_eof309: cs = 309; goto _test_eof; 
	_test_eof310: cs = 310; goto _test_eof; 
	_test_eof311: cs = 311; goto _test_eof; 
	_test_eof312: cs = 312; goto _test_eof; 
	_test_eof313: cs = 313; goto _test_eof; 
	_test_eof314: cs = 314; goto _test_eof; 
	_test_eof315: cs = 315; goto _test_eof; 
	_test_eof316: cs = 316; goto _test_eof; 
	_test_eof317: cs = 317; goto _test_eof; 
	_test_eof318: cs = 318; goto _test_eof; 
	_test_eof319: cs = 319; goto _test_eof; 
	_test_eof320: cs = 320; goto _test_eof; 
	_test_eof321: cs = 321; goto _test_eof; 
	_test_eof322: cs = 322; goto _test_eof; 
	_test_eof323: cs = 323; goto _test_eof; 
	_test_eof324: cs = 324; goto _test_eof; 
	_test_eof325: cs = 325; goto _test_eof; 
	_test_eof326: cs = 326; goto _test_eof; 
	_test_eof327: cs = 327; goto _test_eof; 
	_test_eof328: cs = 328; goto _test_eof; 
	_test_eof329: cs = 329; goto _test_eof; 
	_test_eof330: cs = 330; goto _test_eof; 
	_test_eof331: cs = 331; goto _test_eof; 
	_test_eof332: cs = 332; goto _test_eof; 
	_test_eof333: cs = 333; goto _test_eof; 
	_test_eof334: cs = 334; goto _test_eof; 
	_test_eof335: cs = 335; goto _test_eof; 
	_test_eof336: cs = 336; goto _test_eof; 
	_test_eof337: cs = 337; goto _test_eof; 
	_test_eof338: cs = 338; goto _test_eof; 
	_test_eof339: cs = 339; goto _test_eof; 
	_test_eof340: cs = 340; goto _test_eof; 
	_test_eof341: cs = 341; goto _test_eof; 
	_test_eof342: cs = 342; goto _test_eof; 
	_test_eof343: cs = 343; goto _test_eof; 
	_test_eof344: cs = 344; goto _test_eof; 
	_test_eof345: cs = 345; goto _test_eof; 
	_test_eof346: cs = 346; goto _test_eof; 
	_test_eof347: cs = 347; goto _test_eof; 
	_test_eof348: cs = 348; goto _test_eof; 
	_test_eof349: cs = 349; goto _test_eof; 
	_test_eof350: cs = 350; goto _test_eof; 
	_test_eof351: cs = 351; goto _test_eof; 
	_test_eof352: cs = 352; goto _test_eof; 
	_test_eof353: cs = 353; goto _test_eof; 
	_test_eof354: cs = 354; goto _test_eof; 
	_test_eof355: cs = 355; goto _test_eof; 
	_test_eof356: cs = 356; goto _test_eof; 
	_test_eof357: cs = 357; goto _test_eof; 
	_test_eof358: cs = 358; goto _test_eof; 
	_test_eof359: cs = 359; goto _test_eof; 
	_test_eof360: cs = 360; goto _test_eof; 
	_test_eof361: cs = 361; goto _test_eof; 
	_test_eof362: cs = 362; goto _test_eof; 
	_test_eof363: cs = 363; goto _test_eof; 
	_test_eof364: cs = 364; goto _test_eof; 
	_test_eof365: cs = 365; goto _test_eof; 
	_test_eof366: cs = 366; goto _test_eof; 
	_test_eof367: cs = 367; goto _test_eof; 
	_test_eof368: cs = 368; goto _test_eof; 
	_test_eof369: cs = 369; goto _test_eof; 
	_test_eof370: cs = 370; goto _test_eof; 
	_test_eof371: cs = 371; goto _test_eof; 
	_test_eof372: cs = 372; goto _test_eof; 
	_test_eof373: cs = 373; goto _test_eof; 
	_test_eof374: cs = 374; goto _test_eof; 
	_test_eof375: cs = 375; goto _test_eof; 
	_test_eof376: cs = 376; goto _test_eof; 
	_test_eof377: cs = 377; goto _test_eof; 
	_test_eof378: cs = 378; goto _test_eof; 
	_test_eof379: cs = 379; goto _test_eof; 
	_test_eof380: cs = 380; goto _test_eof; 
	_test_eof381: cs = 381; goto _test_eof; 
	_test_eof382: cs = 382; goto _test_eof; 
	_test_eof383: cs = 383; goto _test_eof; 
	_test_eof384: cs = 384; goto _test_eof; 
	_test_eof385: cs = 385; goto _test_eof; 
	_test_eof386: cs = 386; goto _test_eof; 
	_test_eof387: cs = 387; goto _test_eof; 
	_test_eof388: cs = 388; goto _test_eof; 
	_test_eof389: cs = 389; goto _test_eof; 
	_test_eof390: cs = 390; goto _test_eof; 
	_test_eof391: cs = 391; goto _test_eof; 
	_test_eof392: cs = 392; goto _test_eof; 
	_test_eof393: cs = 393; goto _test_eof; 
	_test_eof394: cs = 394; goto _test_eof; 
	_test_eof395: cs = 395; goto _test_eof; 
	_test_eof396: cs = 396; goto _test_eof; 
	_test_eof397: cs = 397; goto _test_eof; 
	_test_eof398: cs = 398; goto _test_eof; 
	_test_eof399: cs = 399; goto _test_eof; 
	_test_eof623: cs = 623; goto _test_eof; 
	_test_eof400: cs = 400; goto _test_eof; 
	_test_eof401: cs = 401; goto _test_eof; 
	_test_eof402: cs = 402; goto _test_eof; 
	_test_eof403: cs = 403; goto _test_eof; 
	_test_eof404: cs = 404; goto _test_eof; 
	_test_eof405: cs = 405; goto _test_eof; 
	_test_eof406: cs = 406; goto _test_eof; 
	_test_eof407: cs = 407; goto _test_eof; 
	_test_eof408: cs = 408; goto _test_eof; 
	_test_eof409: cs = 409; goto _test_eof; 
	_test_eof410: cs = 410; goto _test_eof; 
	_test_eof411: cs = 411; goto _test_eof; 
	_test_eof412: cs = 412; goto _test_eof; 
	_test_eof413: cs = 413; goto _test_eof; 
	_test_eof414: cs = 414; goto _test_eof; 
	_test_eof415: cs = 415; goto _test_eof; 
	_test_eof416: cs = 416; goto _test_eof; 
	_test_eof417: cs = 417; goto _test_eof; 
	_test_eof418: cs = 418; goto _test_eof; 
	_test_eof419: cs = 419; goto _test_eof; 
	_test_eof420: cs = 420; goto _test_eof; 
	_test_eof421: cs = 421; goto _test_eof; 
	_test_eof422: cs = 422; goto _test_eof; 
	_test_eof624: cs = 624; goto _test_eof; 
	_test_eof423: cs = 423; goto _test_eof; 
	_test_eof424: cs = 424; goto _test_eof; 
	_test_eof425: cs = 425; goto _test_eof; 
	_test_eof426: cs = 426; goto _test_eof; 
	_test_eof427: cs = 427; goto _test_eof; 
	_test_eof428: cs = 428; goto _test_eof; 
	_test_eof429: cs = 429; goto _test_eof; 
	_test_eof430: cs = 430; goto _test_eof; 
	_test_eof431: cs = 431; goto _test_eof; 
	_test_eof432: cs = 432; goto _test_eof; 
	_test_eof433: cs = 433; goto _test_eof; 
	_test_eof434: cs = 434; goto _test_eof; 
	_test_eof435: cs = 435; goto _test_eof; 
	_test_eof436: cs = 436; goto _test_eof; 
	_test_eof437: cs = 437; goto _test_eof; 
	_test_eof438: cs = 438; goto _test_eof; 
	_test_eof439: cs = 439; goto _test_eof; 
	_test_eof440: cs = 440; goto _test_eof; 
	_test_eof441: cs = 441; goto _test_eof; 
	_test_eof442: cs = 442; goto _test_eof; 
	_test_eof443: cs = 443; goto _test_eof; 
	_test_eof444: cs = 444; goto _test_eof; 
	_test_eof445: cs = 445; goto _test_eof; 
	_test_eof446: cs = 446; goto _test_eof; 
	_test_eof447: cs = 447; goto _test_eof; 
	_test_eof448: cs = 448; goto _test_eof; 
	_test_eof449: cs = 449; goto _test_eof; 
	_test_eof450: cs = 450; goto _test_eof; 
	_test_eof451: cs = 451; goto _test_eof; 
	_test_eof452: cs = 452; goto _test_eof; 
	_test_eof453: cs = 453; goto _test_eof; 
	_test_eof454: cs = 454; goto _test_eof; 
	_test_eof455: cs = 455; goto _test_eof; 
	_test_eof456: cs = 456; goto _test_eof; 
	_test_eof457: cs = 457; goto _test_eof; 
	_test_eof458: cs = 458; goto _test_eof; 
	_test_eof459: cs = 459; goto _test_eof; 
	_test_eof460: cs = 460; goto _test_eof; 
	_test_eof461: cs = 461; goto _test_eof; 
	_test_eof462: cs = 462; goto _test_eof; 
	_test_eof463: cs = 463; goto _test_eof; 
	_test_eof464: cs = 464; goto _test_eof; 
	_test_eof465: cs = 465; goto _test_eof; 
	_test_eof466: cs = 466; goto _test_eof; 
	_test_eof467: cs = 467; goto _test_eof; 
	_test_eof468: cs = 468; goto _test_eof; 
	_test_eof469: cs = 469; goto _test_eof; 
	_test_eof470: cs = 470; goto _test_eof; 
	_test_eof471: cs = 471; goto _test_eof; 
	_test_eof472: cs = 472; goto _test_eof; 
	_test_eof473: cs = 473; goto _test_eof; 
	_test_eof474: cs = 474; goto _test_eof; 
	_test_eof475: cs = 475; goto _test_eof; 
	_test_eof476: cs = 476; goto _test_eof; 
	_test_eof477: cs = 477; goto _test_eof; 
	_test_eof478: cs = 478; goto _test_eof; 
	_test_eof479: cs = 479; goto _test_eof; 
	_test_eof480: cs = 480; goto _test_eof; 
	_test_eof481: cs = 481; goto _test_eof; 
	_test_eof482: cs = 482; goto _test_eof; 
	_test_eof483: cs = 483; goto _test_eof; 
	_test_eof484: cs = 484; goto _test_eof; 
	_test_eof485: cs = 485; goto _test_eof; 
	_test_eof486: cs = 486; goto _test_eof; 
	_test_eof487: cs = 487; goto _test_eof; 
	_test_eof488: cs = 488; goto _test_eof; 
	_test_eof489: cs = 489; goto _test_eof; 
	_test_eof490: cs = 490; goto _test_eof; 
	_test_eof491: cs = 491; goto _test_eof; 
	_test_eof492: cs = 492; goto _test_eof; 
	_test_eof493: cs = 493; goto _test_eof; 
	_test_eof494: cs = 494; goto _test_eof; 
	_test_eof495: cs = 495; goto _test_eof; 
	_test_eof496: cs = 496; goto _test_eof; 
	_test_eof497: cs = 497; goto _test_eof; 
	_test_eof498: cs = 498; goto _test_eof; 
	_test_eof499: cs = 499; goto _test_eof; 
	_test_eof500: cs = 500; goto _test_eof; 
	_test_eof501: cs = 501; goto _test_eof; 
	_test_eof502: cs = 502; goto _test_eof; 
	_test_eof503: cs = 503; goto _test_eof; 
	_test_eof504: cs = 504; goto _test_eof; 
	_test_eof505: cs = 505; goto _test_eof; 
	_test_eof506: cs = 506; goto _test_eof; 
	_test_eof507: cs = 507; goto _test_eof; 
	_test_eof508: cs = 508; goto _test_eof; 
	_test_eof509: cs = 509; goto _test_eof; 
	_test_eof510: cs = 510; goto _test_eof; 
	_test_eof511: cs = 511; goto _test_eof; 
	_test_eof512: cs = 512; goto _test_eof; 
	_test_eof513: cs = 513; goto _test_eof; 
	_test_eof514: cs = 514; goto _test_eof; 
	_test_eof515: cs = 515; goto _test_eof; 
	_test_eof516: cs = 516; goto _test_eof; 
	_test_eof517: cs = 517; goto _test_eof; 
	_test_eof518: cs = 518; goto _test_eof; 
	_test_eof519: cs = 519; goto _test_eof; 
	_test_eof520: cs = 520; goto _test_eof; 
	_test_eof521: cs = 521; goto _test_eof; 
	_test_eof522: cs = 522; goto _test_eof; 
	_test_eof523: cs = 523; goto _test_eof; 
	_test_eof524: cs = 524; goto _test_eof; 
	_test_eof525: cs = 525; goto _test_eof; 
	_test_eof526: cs = 526; goto _test_eof; 
	_test_eof527: cs = 527; goto _test_eof; 
	_test_eof528: cs = 528; goto _test_eof; 
	_test_eof529: cs = 529; goto _test_eof; 
	_test_eof530: cs = 530; goto _test_eof; 
	_test_eof531: cs = 531; goto _test_eof; 
	_test_eof532: cs = 532; goto _test_eof; 
	_test_eof533: cs = 533; goto _test_eof; 
	_test_eof534: cs = 534; goto _test_eof; 
	_test_eof535: cs = 535; goto _test_eof; 
	_test_eof536: cs = 536; goto _test_eof; 
	_test_eof537: cs = 537; goto _test_eof; 
	_test_eof538: cs = 538; goto _test_eof; 
	_test_eof539: cs = 539; goto _test_eof; 
	_test_eof540: cs = 540; goto _test_eof; 
	_test_eof541: cs = 541; goto _test_eof; 
	_test_eof542: cs = 542; goto _test_eof; 
	_test_eof543: cs = 543; goto _test_eof; 
	_test_eof544: cs = 544; goto _test_eof; 
	_test_eof545: cs = 545; goto _test_eof; 
	_test_eof546: cs = 546; goto _test_eof; 
	_test_eof547: cs = 547; goto _test_eof; 
	_test_eof548: cs = 548; goto _test_eof; 
	_test_eof549: cs = 549; goto _test_eof; 
	_test_eof550: cs = 550; goto _test_eof; 
	_test_eof551: cs = 551; goto _test_eof; 
	_test_eof552: cs = 552; goto _test_eof; 
	_test_eof553: cs = 553; goto _test_eof; 
	_test_eof554: cs = 554; goto _test_eof; 
	_test_eof555: cs = 555; goto _test_eof; 
	_test_eof556: cs = 556; goto _test_eof; 
	_test_eof557: cs = 557; goto _test_eof; 
	_test_eof558: cs = 558; goto _test_eof; 
	_test_eof559: cs = 559; goto _test_eof; 
	_test_eof560: cs = 560; goto _test_eof; 
	_test_eof561: cs = 561; goto _test_eof; 
	_test_eof562: cs = 562; goto _test_eof; 
	_test_eof563: cs = 563; goto _test_eof; 
	_test_eof564: cs = 564; goto _test_eof; 
	_test_eof565: cs = 565; goto _test_eof; 
	_test_eof566: cs = 566; goto _test_eof; 
	_test_eof567: cs = 567; goto _test_eof; 
	_test_eof568: cs = 568; goto _test_eof; 
	_test_eof569: cs = 569; goto _test_eof; 
	_test_eof570: cs = 570; goto _test_eof; 
	_test_eof571: cs = 571; goto _test_eof; 
	_test_eof572: cs = 572; goto _test_eof; 
	_test_eof573: cs = 573; goto _test_eof; 
	_test_eof574: cs = 574; goto _test_eof; 
	_test_eof575: cs = 575; goto _test_eof; 
	_test_eof576: cs = 576; goto _test_eof; 
	_test_eof577: cs = 577; goto _test_eof; 
	_test_eof578: cs = 578; goto _test_eof; 
	_test_eof579: cs = 579; goto _test_eof; 
	_test_eof580: cs = 580; goto _test_eof; 
	_test_eof581: cs = 581; goto _test_eof; 
	_test_eof582: cs = 582; goto _test_eof; 
	_test_eof583: cs = 583; goto _test_eof; 
	_test_eof584: cs = 584; goto _test_eof; 
	_test_eof585: cs = 585; goto _test_eof; 
	_test_eof586: cs = 586; goto _test_eof; 
	_test_eof587: cs = 587; goto _test_eof; 
	_test_eof588: cs = 588; goto _test_eof; 
	_test_eof589: cs = 589; goto _test_eof; 
	_test_eof590: cs = 590; goto _test_eof; 
	_test_eof591: cs = 591; goto _test_eof; 
	_test_eof592: cs = 592; goto _test_eof; 
	_test_eof593: cs = 593; goto _test_eof; 
	_test_eof594: cs = 594; goto _test_eof; 
	_test_eof595: cs = 595; goto _test_eof; 
	_test_eof596: cs = 596; goto _test_eof; 
	_test_eof597: cs = 597; goto _test_eof; 
	_test_eof598: cs = 598; goto _test_eof; 
	_test_eof599: cs = 599; goto _test_eof; 
	_test_eof600: cs = 600; goto _test_eof; 
	_test_eof601: cs = 601; goto _test_eof; 
	_test_eof602: cs = 602; goto _test_eof; 
	_test_eof603: cs = 603; goto _test_eof; 
	_test_eof604: cs = 604; goto _test_eof; 
	_test_eof605: cs = 605; goto _test_eof; 
	_test_eof606: cs = 606; goto _test_eof; 
	_test_eof607: cs = 607; goto _test_eof; 
	_test_eof608: cs = 608; goto _test_eof; 
	_test_eof609: cs = 609; goto _test_eof; 
	_test_eof610: cs = 610; goto _test_eof; 
	_test_eof611: cs = 611; goto _test_eof; 
	_test_eof612: cs = 612; goto _test_eof; 
	_test_eof613: cs = 613; goto _test_eof; 
	_test_eof614: cs = 614; goto _test_eof; 
	_test_eof615: cs = 615; goto _test_eof; 
	_test_eof616: cs = 616; goto _test_eof; 
	_test_eof617: cs = 617; goto _test_eof; 
	_test_eof618: cs = 618; goto _test_eof; 
	_test_eof619: cs = 619; goto _test_eof; 
	_test_eof620: cs = 620; goto _test_eof; 
	_test_eof621: cs = 621; goto _test_eof; 
	_test_eof625: cs = 625; goto _test_eof; 
	_test_eof622: cs = 622; goto _test_eof; 
	_test_eof626: cs = 626; goto _test_eof; 

	_test_eof: {}
	if ( p == eof )
	{
	switch ( cs ) {
	case 1: 
	case 2: 
	case 3: 
	case 4: 
	case 5: 
	case 6: 
	case 7: 
	case 8: 
	case 9: 
	case 10: 
	case 11: 
	case 12: 
	case 13: 
#line 45 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_fileformat_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 19: 
	case 21: 
	case 22: 
	case 23: 
	case 24: 
	case 25: 
	case 26: 
	case 27: 
	case 28: 
	case 29: 
	case 30: 
	case 31: 
	case 32: 
	case 33: 
	case 34: 
	case 35: 
	case 36: 
	case 37: 
	case 38: 
	case 39: 
	case 40: 
	case 41: 
	case 42: 
	case 43: 
	case 44: 
	case 45: 
	case 46: 
	case 47: 
	case 48: 
	case 49: 
	case 50: 
	case 51: 
	case 52: 
	case 53: 
	case 54: 
	case 55: 
	case 56: 
	case 57: 
	case 58: 
	case 59: 
	case 60: 
	case 61: 
	case 62: 
	case 63: 
	case 64: 
	case 65: 
	case 66: 
	case 67: 
	case 68: 
	case 69: 
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 391: 
	case 392: 
	case 393: 
	case 394: 
	case 395: 
	case 396: 
	case 397: 
	case 398: 
	case 399: 
#line 63 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_header_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 14: 
	case 15: 
#line 191 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_fileformat_section_error(*this,
            "Fileformat is not a sequence of alphanumeric and/or punctuation characters");
        p--; {goto st621;}
    }
#line 45 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_fileformat_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 70: 
	case 71: 
	case 72: 
	case 73: 
	case 74: 
	case 75: 
	case 76: 
	case 79: 
	case 80: 
	case 81: 
	case 82: 
	case 83: 
	case 84: 
	case 85: 
	case 86: 
	case 87: 
	case 88: 
	case 89: 
	case 90: 
	case 91: 
	case 92: 
	case 98: 
	case 99: 
#line 198 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in ALT metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 300: 
	case 301: 
	case 302: 
	case 303: 
	case 304: 
	case 305: 
	case 306: 
	case 307: 
#line 209 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in assembly metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 315: 
	case 316: 
	case 317: 
	case 318: 
	case 319: 
	case 320: 
	case 321: 
	case 322: 
	case 323: 
	case 324: 
	case 329: 
	case 330: 
	case 331: 
	case 332: 
	case 333: 
	case 334: 
#line 215 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in contig metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 102: 
	case 103: 
	case 104: 
	case 105: 
	case 106: 
	case 107: 
	case 108: 
	case 109: 
	case 110: 
	case 114: 
	case 115: 
	case 116: 
	case 117: 
	case 118: 
	case 119: 
	case 120: 
	case 121: 
	case 122: 
	case 123: 
	case 124: 
	case 125: 
	case 126: 
	case 127: 
	case 133: 
	case 134: 
#line 221 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in FILTER metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 135: 
	case 136: 
	case 137: 
	case 138: 
	case 139: 
	case 140: 
	case 141: 
	case 142: 
	case 143: 
	case 147: 
	case 148: 
	case 149: 
	case 150: 
	case 151: 
	case 152: 
	case 153: 
	case 156: 
	case 157: 
	case 158: 
	case 159: 
	case 160: 
	case 163: 
	case 164: 
	case 165: 
	case 166: 
	case 167: 
	case 168: 
	case 169: 
	case 170: 
	case 171: 
	case 172: 
	case 173: 
	case 174: 
	case 175: 
	case 176: 
	case 182: 
	case 183: 
#line 227 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in FORMAT metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 185: 
	case 186: 
	case 187: 
	case 188: 
	case 189: 
	case 190: 
	case 191: 
	case 192: 
	case 196: 
	case 197: 
	case 198: 
	case 199: 
	case 200: 
	case 201: 
	case 202: 
	case 205: 
	case 206: 
	case 207: 
	case 208: 
	case 209: 
	case 212: 
	case 213: 
	case 214: 
	case 215: 
	case 216: 
	case 217: 
	case 218: 
	case 219: 
	case 220: 
	case 221: 
	case 222: 
	case 223: 
	case 224: 
	case 225: 
	case 231: 
	case 232: 
#line 243 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in INFO metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 234: 
	case 235: 
	case 236: 
	case 237: 
	case 238: 
	case 239: 
	case 240: 
	case 241: 
	case 242: 
	case 249: 
#line 259 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in PEDIGREE metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 335: 
	case 336: 
	case 337: 
	case 338: 
	case 339: 
	case 340: 
	case 341: 
	case 342: 
	case 343: 
	case 344: 
	case 345: 
#line 265 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in pedigreeDB metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 250: 
	case 251: 
	case 252: 
	case 253: 
	case 254: 
	case 255: 
	case 256: 
	case 257: 
	case 258: 
	case 259: 
	case 299: 
#line 271 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in SAMPLE metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 354: 
	case 355: 
	case 356: 
	case 357: 
	case 358: 
	case 359: 
	case 360: 
	case 361: 
	case 362: 
	case 363: 
	case 364: 
	case 365: 
	case 366: 
	case 367: 
	case 368: 
	case 369: 
	case 370: 
	case 371: 
	case 372: 
	case 373: 
	case 374: 
	case 375: 
	case 376: 
	case 377: 
	case 378: 
	case 379: 
	case 380: 
	case 381: 
	case 382: 
	case 383: 
	case 384: 
	case 385: 
	case 386: 
	case 387: 
	case 388: 
	case 389: 
	case 390: 
#line 303 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_header_section_error(*this, "The header line does not start with the mandatory columns: CHROM, POS, ID, REF, ALT, QUAL, FILTER and INFO");
        p--; {goto st622;}
    }
#line 63 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_header_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 400: 
	case 423: 
	case 424: 
	case 425: 
	case 426: 
	case 427: 
	case 619: 
	case 620: 
#line 311 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Chromosome is not a string without colons or whitespaces, optionally wrapped with angle brackets (<>)");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 401: 
	case 402: 
	case 403: 
#line 317 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Position is not a positive number");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 404: 
	case 405: 
#line 323 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "ID is not a single dot or a list of strings without semicolons or whitespaces");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 406: 
	case 407: 
#line 329 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Reference is not a string of bases");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 408: 
	case 409: 
	case 564: 
	case 565: 
	case 566: 
	case 567: 
	case 568: 
	case 569: 
	case 570: 
	case 571: 
	case 572: 
	case 573: 
	case 574: 
	case 575: 
	case 576: 
	case 577: 
	case 578: 
	case 579: 
	case 580: 
	case 581: 
	case 582: 
	case 583: 
	case 584: 
	case 585: 
	case 586: 
	case 587: 
	case 588: 
	case 589: 
	case 590: 
	case 591: 
	case 592: 
	case 593: 
	case 594: 
	case 595: 
	case 596: 
	case 597: 
	case 598: 
	case 599: 
	case 600: 
	case 601: 
	case 602: 
	case 603: 
	case 604: 
	case 605: 
	case 606: 
	case 607: 
	case 608: 
	case 609: 
	case 610: 
	case 611: 
	case 612: 
	case 613: 
	case 614: 
	case 615: 
	case 616: 
	case 617: 
	case 618: 
#line 335 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Alternate is not a single dot or a comma-separated list of bases");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 410: 
	case 411: 
	case 412: 
	case 557: 
	case 558: 
	case 559: 
	case 560: 
	case 561: 
	case 562: 
	case 563: 
#line 341 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Quality is not a single dot or a positive number");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 413: 
	case 414: 
	case 415: 
	case 555: 
	case 556: 
#line 347 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Filter is not a single dot or a semicolon-separated list of strings");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 419: 
	case 420: 
#line 459 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Format is not a colon-separated list of alphanumeric strings");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 430: 
	case 431: 
#line 465 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        std::ostringstream message_stream;
        message_stream << "Sample #" << (n_columns - 9) << " is not a valid string";
        ErrorPolicy::handle_body_section_error(*this, message_stream.str());
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 17: 
	case 20: 
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
#line 303 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_header_section_error(*this, "The header line does not start with the mandatory columns: CHROM, POS, ID, REF, ALT, QUAL, FILTER and INFO");
        p--; {goto st622;}
    }
#line 63 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_header_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 77: 
	case 78: 
	case 100: 
#line 203 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "ALT metadata ID is not prefixed by DEL/INS/DUP/INV/CNV and suffixed by ':' and a text sequence");
        p--; {goto st621;}
    }
#line 198 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in ALT metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 101: 
#line 221 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in FILTER metadata");
        p--; {goto st621;}
    }
#line 227 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in FORMAT metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 154: 
	case 155: 
	case 184: 
#line 232 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "FORMAT metadata Number is not a number, A, R, G or dot");
        p--; {goto st621;}
    }
#line 227 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in FORMAT metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 203: 
	case 204: 
	case 233: 
#line 248 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "INFO metadata Number is not a number, A, R, G or dot");
        p--; {goto st621;}
    }
#line 243 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in INFO metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 161: 
	case 162: 
#line 253 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "INFO metadata Type is not a Integer, Float, Flag, Character or String");
        p--; {goto st621;}
    }
#line 227 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in FORMAT metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 210: 
	case 211: 
#line 253 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "INFO metadata Type is not a Integer, Float, Flag, Character or String");
        p--; {goto st621;}
    }
#line 243 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in INFO metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 263: 
	case 264: 
	case 265: 
	case 266: 
	case 267: 
	case 268: 
	case 269: 
	case 270: 
	case 271: 
#line 276 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "SAMPLE metadata Genomes is not a valid string (maybe it contains quotes?)");
        p--; {goto st621;}
    }
#line 271 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in SAMPLE metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 273: 
	case 274: 
	case 275: 
	case 276: 
	case 277: 
	case 278: 
	case 279: 
	case 280: 
	case 281: 
#line 281 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "SAMPLE metadata Mixture is not a valid string (maybe it contains quotes?)");
        p--; {goto st621;}
    }
#line 271 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in SAMPLE metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 95: 
	case 96: 
	case 97: 
#line 287 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata ID contains a character different from alphanumeric, dot, underscore and dash");
        p--; {goto st621;}
    }
#line 198 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in ALT metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 325: 
	case 326: 
	case 327: 
	case 328: 
#line 287 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata ID contains a character different from alphanumeric, dot, underscore and dash");
        p--; {goto st621;}
    }
#line 215 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in contig metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 111: 
	case 112: 
	case 113: 
	case 130: 
	case 131: 
	case 132: 
#line 287 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata ID contains a character different from alphanumeric, dot, underscore and dash");
        p--; {goto st621;}
    }
#line 221 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in FILTER metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 144: 
	case 145: 
	case 146: 
	case 179: 
	case 180: 
	case 181: 
#line 287 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata ID contains a character different from alphanumeric, dot, underscore and dash");
        p--; {goto st621;}
    }
#line 227 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in FORMAT metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 193: 
	case 194: 
	case 195: 
	case 228: 
	case 229: 
	case 230: 
#line 287 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata ID contains a character different from alphanumeric, dot, underscore and dash");
        p--; {goto st621;}
    }
#line 243 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in INFO metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 243: 
	case 244: 
	case 245: 
	case 246: 
	case 247: 
	case 248: 
#line 287 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata ID contains a character different from alphanumeric, dot, underscore and dash");
        p--; {goto st621;}
    }
#line 259 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in PEDIGREE metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 260: 
	case 261: 
#line 287 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata ID contains a character different from alphanumeric, dot, underscore and dash");
        p--; {goto st621;}
    }
#line 271 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in SAMPLE metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 93: 
	case 94: 
#line 292 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata description string is not valid");
        p--; {goto st621;}
    }
#line 198 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in ALT metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 128: 
	case 129: 
#line 292 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata description string is not valid");
        p--; {goto st621;}
    }
#line 221 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in FILTER metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 177: 
	case 178: 
#line 292 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata description string is not valid");
        p--; {goto st621;}
    }
#line 227 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in FORMAT metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 226: 
	case 227: 
#line 292 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata description string is not valid");
        p--; {goto st621;}
    }
#line 243 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in INFO metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 283: 
	case 284: 
	case 285: 
	case 286: 
	case 287: 
	case 288: 
	case 289: 
	case 290: 
	case 291: 
	case 292: 
	case 293: 
	case 294: 
	case 295: 
	case 296: 
	case 297: 
	case 298: 
#line 292 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata description string is not valid");
        p--; {goto st621;}
    }
#line 271 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in SAMPLE metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 308: 
	case 309: 
	case 310: 
	case 311: 
	case 312: 
	case 313: 
	case 314: 
#line 297 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata URL is not valid");
        p--; {goto st621;}
    }
#line 209 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in assembly metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 346: 
	case 347: 
	case 348: 
	case 349: 
	case 350: 
	case 351: 
	case 352: 
	case 353: 
#line 297 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata URL is not valid");
        p--; {goto st621;}
    }
#line 265 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in pedigreeDB metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 416: 
	case 417: 
	case 418: 
	case 432: 
	case 433: 
	case 434: 
	case 435: 
	case 436: 
	case 442: 
	case 443: 
	case 447: 
	case 451: 
	case 461: 
	case 465: 
	case 466: 
	case 476: 
	case 477: 
	case 478: 
	case 479: 
	case 480: 
	case 483: 
	case 487: 
	case 491: 
	case 492: 
	case 493: 
	case 497: 
	case 504: 
	case 505: 
	case 506: 
	case 519: 
	case 520: 
	case 524: 
	case 525: 
	case 535: 
	case 536: 
	case 537: 
	case 538: 
	case 539: 
	case 543: 
	case 544: 
	case 545: 
	case 546: 
	case 547: 
	case 548: 
	case 549: 
	case 550: 
	case 554: 
#line 358 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info key is not a sequence of alphanumeric and/or punctuation characters");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 437: 
	case 438: 
#line 363 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info field value is not a comma-separated list of valid strings (maybe it contains whitespaces?)");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 444: 
	case 445: 
	case 446: 
#line 368 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info AA value is not a single dot or a string of bases");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 448: 
	case 449: 
	case 450: 
#line 373 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info AC value is not a comma-separated list of numbers");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 452: 
	case 453: 
	case 454: 
	case 455: 
	case 456: 
	case 457: 
	case 458: 
	case 459: 
	case 460: 
#line 378 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info AF value is not a comma-separated list of numbers");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 462: 
	case 463: 
	case 464: 
#line 383 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info AN value is not an integer number");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 467: 
	case 468: 
	case 469: 
	case 470: 
	case 471: 
	case 472: 
	case 473: 
	case 474: 
	case 475: 
#line 388 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info BQ value is not a number");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 481: 
	case 482: 
#line 393 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info CIGAR value is not an alphanumeric string");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 485: 
	case 486: 
#line 398 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info DB is not a flag (with 1/0/no value)");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 488: 
	case 489: 
	case 490: 
#line 403 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info DP value is not an integer number");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 494: 
	case 495: 
	case 496: 
#line 408 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info END value is not an integer number");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 499: 
	case 500: 
#line 413 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info H2 is not a flag (with 1/0/no value)");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 502: 
	case 503: 
#line 418 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info H3 is not a flag (with 1/0/no value)");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 510: 
	case 511: 
	case 512: 
	case 513: 
	case 514: 
	case 515: 
	case 516: 
	case 517: 
	case 518: 
#line 423 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info MQ value is not a number");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 507: 
	case 508: 
	case 509: 
#line 428 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info MQ0 value is not an integer number");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 521: 
	case 522: 
	case 523: 
#line 433 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info NS value is not an integer number");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 526: 
	case 527: 
	case 528: 
	case 529: 
	case 530: 
	case 531: 
	case 532: 
	case 533: 
	case 534: 
#line 438 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info SB value is not a number");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 541: 
	case 542: 
#line 443 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info SOMATIC is not a flag (with 1/0/no value)");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 552: 
	case 553: 
#line 448 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info VALIDATED is not a flag (with 1/0/no value)");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 440: 
	case 441: 
#line 453 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info 1000G is not a flag (with 1/0/no value)");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 421: 
	case 422: 
	case 428: 
	case 429: 
#line 472 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        std::ostringstream message_stream;
        message_stream << "Sample #" << (n_columns - 9) << " does not start with a valid genotype";
        ErrorPolicy::handle_body_section_error(*this, message_stream.str());
        p--; {goto st622;}
    }
#line 465 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        std::ostringstream message_stream;
        message_stream << "Sample #" << (n_columns - 9) << " is not a valid string";
        ErrorPolicy::handle_body_section_error(*this, message_stream.str());
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 16: 
#line 45 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_fileformat_section_error(*this);
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
#line 303 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_header_section_error(*this, "The header line does not start with the mandatory columns: CHROM, POS, ID, REF, ALT, QUAL, FILTER and INFO");
        p--; {goto st622;}
    }
#line 63 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_header_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 272: 
#line 276 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "SAMPLE metadata Genomes is not a valid string (maybe it contains quotes?)");
        p--; {goto st621;}
    }
#line 281 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "SAMPLE metadata Mixture is not a valid string (maybe it contains quotes?)");
        p--; {goto st621;}
    }
#line 271 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in SAMPLE metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 282: 
#line 281 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "SAMPLE metadata Mixture is not a valid string (maybe it contains quotes?)");
        p--; {goto st621;}
    }
#line 292 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata description string is not valid");
        p--; {goto st621;}
    }
#line 271 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in SAMPLE metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 262: 
#line 287 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Metadata ID contains a character different from alphanumeric, dot, underscore and dash");
        p--; {goto st621;}
    }
#line 276 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "SAMPLE metadata Genomes is not a valid string (maybe it contains quotes?)");
        p--; {goto st621;}
    }
#line 271 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in SAMPLE metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
	case 484: 
#line 398 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info DB is not a flag (with 1/0/no value)");
        p--; {goto st622;}
    }
#line 358 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info key is not a sequence of alphanumeric and/or punctuation characters");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 498: 
#line 413 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info H2 is not a flag (with 1/0/no value)");
        p--; {goto st622;}
    }
#line 358 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info key is not a sequence of alphanumeric and/or punctuation characters");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 501: 
#line 418 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info H3 is not a flag (with 1/0/no value)");
        p--; {goto st622;}
    }
#line 358 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info key is not a sequence of alphanumeric and/or punctuation characters");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 540: 
#line 443 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info SOMATIC is not a flag (with 1/0/no value)");
        p--; {goto st622;}
    }
#line 358 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info key is not a sequence of alphanumeric and/or punctuation characters");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 551: 
#line 448 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info VALIDATED is not a flag (with 1/0/no value)");
        p--; {goto st622;}
    }
#line 358 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info key is not a sequence of alphanumeric and/or punctuation characters");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 439: 
#line 453 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info 1000G is not a flag (with 1/0/no value)");
        p--; {goto st622;}
    }
#line 358 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info key is not a sequence of alphanumeric and/or punctuation characters");
        p--; {goto st622;}
    }
#line 353 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Info is not a single dot or a semicolon-separated list of key-value pairs");
        p--; {goto st622;}
    }
#line 68 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st622;}
    }
	break;
	case 18: 
#line 198 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in ALT metadata");
        p--; {goto st621;}
    }
#line 221 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in FILTER metadata");
        p--; {goto st621;}
    }
#line 227 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in FORMAT metadata");
        p--; {goto st621;}
    }
#line 243 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in INFO metadata");
        p--; {goto st621;}
    }
#line 209 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in assembly metadata");
        p--; {goto st621;}
    }
#line 215 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in contig metadata");
        p--; {goto st621;}
    }
#line 271 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in SAMPLE metadata");
        p--; {goto st621;}
    }
#line 259 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in PEDIGREE metadata");
        p--; {goto st621;}
    }
#line 265 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this, "Error in pedigreeDB metadata");
        p--; {goto st621;}
    }
#line 50 "cpp/src/bioformats/vcf/vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st621;}
    }
	break;
#line 16715 "cpp/src/bioformats/vcf/validator_detail.hpp"
	}
	}

	_out: {}
	}

#line 777 "cpp/src/bioformats/vcf/vcf_v41.ragel"

    }

    
    template <typename Configuration>
    void Parser<Configuration>::optional_check_meta_section() const
    {
      if (source->meta_entries.find("reference") == source->meta_entries.end()) {
        throw ParsingWarning("It is recommended to include a 'reference' entry in the meta section");
      }
    }
    
    template <typename Configuration>
    void Parser<Configuration>::optional_check_body_entry() //const
    {
      // All samples should have the same ploidy
      int ploidy = -1;
      auto samples = ParsePolicy::column_tokens("SAMPLES");
      for (size_t i = 0; i < samples.size(); ++i) {
        auto & sample = samples[i];
        std::vector<std::string> subfields;
        boost::split(subfields, sample, boost::is_any_of(":"));
        std::vector<std::string> alleles;
        boost::split(alleles, subfields[0], boost::is_any_of("|,/"));

        if (ploidy > 0) {
          if (alleles.size() != ploidy) {
            throw ParsingWarning("Sample #" + std::to_string(i) + " has " + std::to_string(alleles.size()) + 
                                 " allele(s), but " + std::to_string(ploidy) + " were found in others");
          }
        } else {
          ploidy = alleles.size();
        }
      }
      
      // The file should be sorted
      if (ParsingState::records->size() > 0) {
        auto & previous_record = ParsingState::records->back();
        std::string current_chromosome = ParsePolicy::column_tokens("CHROM")[0];
        int current_position = std::stoi(ParsePolicy::column_tokens("POS")[0]);
        if (previous_record.chromosome == current_chromosome && 
            previous_record.position > current_position) {
          throw ParsingWarning("Genomic position " + current_chromosome + ":" + std::to_string(current_position) + 
                               " is listed after " + previous_record.chromosome + ":" + std::to_string(previous_record.position));
        }
      }
      
      // The associated 'contig' meta entry should exist (notify only once)
      std::string current_chromosome = ParsePolicy::column_tokens("CHROM")[0];
      
      if (ParsingState::bad_defined_contigs.find(current_chromosome) == ParsingState::bad_defined_contigs.end()) {
        typedef std::multimap<std::string, MetaEntry>::iterator iter;
        std::pair<iter, iter> range = ParsingState::source->meta_entries.equal_range("contig");
        
        bool found_in_header = false;
        for (iter current = range.first; current != range.second; ++current) {
          auto & key_values = boost::get<std::map < std::string, std::string >> ((current->second).value);
          if (key_values.find("ID") != key_values.end() && key_values["ID"] == current_chromosome) {
            found_in_header = true;
            break;
          }
        }
        
        if (!found_in_header) {
          ParsingState::add_bad_defined_contig(current_chromosome);
          throw ParsingWarning("Chromosome/contig '" + current_chromosome + "' is not described in a 'contig' meta description");
        }
      }
    }
    
    template <typename Configuration>
    void Parser<Configuration>::optional_check_body_section() const
    {
      
    }
    
  }
}
