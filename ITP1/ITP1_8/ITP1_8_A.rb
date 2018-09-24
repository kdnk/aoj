require 'test/unit'

def switch_case(str)
  switched = str.chars.map do |chr|
    if chr.is_lower?
      chr.upcase
    elsif chr.is_upper?
      chr.downcase
    else
      chr
    end
  end
  return switched.join("")
end

class String
  def is_upper?
    self == self.upcase
  end

  def is_lower?
    self == self.downcase
  end
end

n = gets.chomp
puts switch_case(n)


class TestCase < Test::Unit::TestCase
  def test_1
    assert_equal switch_case("ab"), 'AB'
    assert_equal switch_case("CD"), 'cd'
    assert_equal switch_case("aB"), 'Ab'
    assert_equal switch_case("fAIR, LATER, OCCASIONALLY CLOUDY."), 'Fair, later, occasionally cloudy.'
  end
end
