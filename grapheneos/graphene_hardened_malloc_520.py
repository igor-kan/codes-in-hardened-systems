"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 520."""

def spec_graphene_hardened_malloc_520() -> dict:
    return {"system": "GrapheneOS", "spec_id": 520, "quarantine_slabs": 9, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_520():
    s = spec_graphene_hardened_malloc_520()
    assert s["spec_id"] == 520
